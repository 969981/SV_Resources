/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034df90; name: FUN_0034df90
 */


void FUN_0034df90(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  byte local_60;
  undefined4 local_5f;
  undefined1 local_5b;
  ulong local_58;
  ulong local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_60 = 8;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  local_5f = 0x20544547;
  local_5b = 0;
                    /* try { // try from 0034dfc4 to 0034dfcf has its CatchHandler @ 0034e128 */
  FUN_0034e1b4(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
                    /* try { // try from 0034dfe8 to 0034dff7 has its CatchHandler @ 0034e118 */
  FUN_0034e360(param_2,1,&local_48);
  local_60 = 4;
  local_5f = CONCAT13(local_5f._3_1_,0xa0d);
                    /* try { // try from 0034e00c to 0034e017 has its CatchHandler @ 0034e114 */
  FUN_0034e1b4(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
                    /* try { // try from 0034e034 to 0034e04b has its CatchHandler @ 0034e104 */
  FUN_002b3540(&local_60,local_48,local_40,&DAT_03c886bc,0);
  uVar1 = (ulong)(local_60 >> 1);
  uVar2 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_58;
    uVar2 = local_50;
  }
                    /* try { // try from 0034e068 to 0034e06f has its CatchHandler @ 0034e100 */
  FUN_003676d0(param_1,uVar2,uVar1);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  pbVar4 = local_48;
  puVar3 = PTR_LAB_047cba48;
  if (local_48 != (byte *)0x0) {
    if (local_40 != local_48) {
      pbVar6 = local_40;
      do {
        pbVar5 = pbVar6 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          FUN_0049e790(puVar3,*(undefined8 *)(pbVar6 + -8));
        }
        pbVar6 = pbVar5;
      } while (pbVar4 != pbVar5);
    }
    local_40 = pbVar4;
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


