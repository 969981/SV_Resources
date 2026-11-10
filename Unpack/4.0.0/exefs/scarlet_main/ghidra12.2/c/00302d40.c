/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302d40; name: FUN_00302d40
 */


undefined8 FUN_00302d40(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (param_3 < 0xfffffffffffffffc)) {
    iVar1 = (int)param_3 + 4;
    *(char *)(param_1 + 1) = (char)iVar1;
    param_1[3] = 0;
    param_1[4] = param_3;
    param_1[2] = 0;
    *(char *)((long)param_1 + 0xb) = (char)((uint)iVar1 >> 0x18);
    *(char *)((long)param_1 + 10) = (char)((uint)iVar1 >> 0x10);
    uVar2 = 1;
    *(char *)((long)param_1 + 9) = (char)((uint)iVar1 >> 8);
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0xc) = 6;
  }
  return uVar2;
}


