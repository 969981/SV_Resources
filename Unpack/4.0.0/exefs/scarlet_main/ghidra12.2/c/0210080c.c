/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210080c; name: FUN_0210080c
 */


undefined8 FUN_0210080c(long param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),0);
  if (param_3 == 0) {
    bVar2 = (param_4 & 1) == 0;
    iVar4 = 0x21b;
  }
  else if (param_3 == 2) {
    bVar2 = (param_4 & 1) == 0;
    iVar4 = 0x21d;
  }
  else {
    if (param_3 != 1) {
      return 0;
    }
    bVar2 = (param_4 & 1) == 0;
    iVar4 = 0x219;
  }
  if (!bVar2) {
    iVar4 = iVar4 + 1;
  }
  *param_2 = iVar4;
  *(undefined2 *)(param_2 + 1) = 0x1100;
  param_2[9] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = uVar3 & 0xff;
  if ((param_4 & 1) != 0) {
    uVar3 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
    cVar1 = *(char *)((long)param_2 + 5);
    if (cVar1 < 0) {
      return 1;
    }
    *(char *)((long)param_2 + 5) = cVar1 + '\x10';
    param_2[(ulong)((uint)(int)cVar1 >> 4 & 0xf) + 2] = uVar3 & 0xff;
  }
  return 1;
}


