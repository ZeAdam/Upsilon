#ifndef PROBABILITY_LAW_CONTROLLER_H
#define PROBABILITY_LAW_CONTROLLER_H

#include <escher.h>
#include "law_cell.h"

namespace Probability {

class LawController : public ViewController, public TableViewDataSource {
public:
  LawController(Responder * parentResponder);

  void setActiveCell(int index);

  View * view() override;
  const char * title() const override;
  bool handleEvent(Ion::Events::Event event) override;

  int numberOfCells() override;
  void willDisplayCellForIndex(View * cell, int index) override;
  KDCoordinate cellHeight() override;
  View * reusableCell(int index) override;
  int reusableCellCount() override;
private:
  constexpr static int k_totalNumberOfModels = 7;
  constexpr static int k_maxNumberOfCells = 10;
  // !!! CAUTION: The order here is important
  // The cells should be initialized *before* the tableview!
  LawCell m_cells[k_maxNumberOfCells];
  TableView m_tableView;
  const char ** m_messages;
  int m_activeCell;
};

}

#endif
