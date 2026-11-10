/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ab598; name: FUN_034ab598
 */


void FUN_034ab598(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ushort local_38;
  
  while( true ) {
    plVar3 = *(long **)(param_1 + 0xa0);
    if (plVar3 != (long *)0x0) {
      if (0 < param_2 * 0x10000) {
        uVar4 = 0;
        do {
          (**(code **)(*plVar3 + 0x130))(plVar3,1);
          uVar4 = uVar4 + 1;
        } while ((int)(uVar4 & 0xffff) < (int)(short)param_2);
      }
      local_40 = 0x100000000;
      local_50 = 0;
      uStack_48 = 0;
      local_38 = 0x100;
      local_60 = 0;
      uStack_58 = 0;
      if (0xffff < param_2) {
        uVar4 = 0;
        do {
          local_38 = local_38 & 0xff00;
          (**(code **)(*plVar3 + 0x120))(plVar3,&local_60);
          uVar4 = uVar4 + 1;
        } while ((int)(uVar4 & 0xffff) < param_2 >> 0x10);
      }
      return;
    }
    lVar1 = *(long *)(param_1 + 0x98);
    if (lVar1 == 0) break;
    lVar2 = *(long *)(lVar1 + 0x90);
    if (lVar2 != 0) {
      *(short *)(lVar2 + 0x96) = *(short *)(lVar2 + 0x96) - (short)param_2;
      lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x90);
      lVar1 = *(long *)(param_1 + 0x98);
      if (lVar2 != 0) {
        *(short *)(lVar2 + 0x92) = *(short *)(lVar2 + 0x92) - (short)((uint)param_2 >> 0x10);
        lVar1 = *(long *)(param_1 + 0x98);
      }
    }
    param_1 = lVar1;
  }
  return;
}


