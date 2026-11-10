/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005eb958; name: FUN_005eb958
 */


void FUN_005eb958(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  FUN_005eb600();
  lVar4 = *param_3;
  lVar2 = param_3[1];
  if (lVar4 != lVar2) {
    do {
      if ((*(byte *)(lVar4 + 0x98) & 1) == 0) {
        lVar3 = lVar4 + 0x99;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0xa8);
      }
                    /* try { // try from 005eb9ac to 005eb9b3 has its CatchHandler @ 005eba54 */
      FUN_005eba68(param_1,lVar3);
      if ((*(byte *)(lVar4 + 0x50) & 1) == 0) {
        lVar3 = lVar4 + 0x51;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x60);
      }
      FUN_00213520(&local_50,lVar3,0);
      uVar1 = (ulong)&local_50 | 1;
      if ((local_50 & 1) != 0) {
        uVar1 = local_40;
      }
                    /* try { // try from 005eb9e4 to 005eb9eb has its CatchHandler @ 005eba28 */
      FUN_005eb850(param_1,uVar1);
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar2 != lVar4);
  }
  return;
}


