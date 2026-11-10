/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5fccc; name: FUN_01f5fccc
 */


undefined8 FUN_01f5fccc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x90) == 0) &&
     (((*(char *)(param_1 + 0x60) != '\0' ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (*(long *)(param_1 + 0x58) != 0)))) {
    FUN_01f5fdb0(&local_50,*(undefined8 *)(param_1 + 0x40));
    uVar1 = local_50;
    local_50 = 0;
    lVar2 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    if (lVar2 != 0) {
      FUN_01f5fed0(param_1 + 0x98);
    }
    *(undefined8 *)(param_1 + 0x98) = local_48;
    *(undefined8 *)(param_1 + 0xa0) = uStack_40;
    *(undefined8 *)(param_1 + 0xa8) = local_38;
    FUN_00c43ef0(param_1 + 0x70,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    FUN_01f60284(param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


