/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052cde4; name: FUN_0052cde4
 */


void FUN_0052cde4(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint local_34;
  long *local_28;
  
  bVar2 = *PTR_DAT_047cdc48;
  param_1[6] = (long)param_2;
  *(undefined2 *)(param_1 + 7) = 0;
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[8] = (long)plVar1;
  *(byte *)((long)param_1 + 0x3a) = bVar2 & 1;
  lVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  param_1[9] = lVar4;
  if ((param_3 & 1) != 0) {
    uVar5 = (**(code **)(*param_2 + 0x10))(param_2,&local_28,&local_34);
    if ((local_34 != 0) && ((uVar5 & 1) != 0)) {
      lVar4 = (long)local_28 + ((ulong)local_34 - 0x10);
      plVar3 = (long *)0x0;
      if ((int)local_34 < 0x11) {
        lVar4 = (long)param_1 + (long)(int)local_34 + 0x10;
        plVar3 = local_28;
      }
      *param_1 = lVar4;
      param_1[1] = (long)plVar3;
      if ((int)local_34 < 0x11) {
        local_28 = plVar1;
      }
      param_1[8] = (long)local_28;
    }
  }
  return;
}


