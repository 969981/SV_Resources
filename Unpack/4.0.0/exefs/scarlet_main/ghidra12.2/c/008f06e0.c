/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f06e0; name: FUN_008f06e0
 */


long FUN_008f06e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar3 = PTR_DAT_047d2730;
  uVar2 = *(uint *)(param_2 + 4);
  iVar4 = 8;
  if ((uVar2 >> 4 & 1) != 0) {
    (**(code **)PTR_DAT_047d2730)(*param_1,4,&local_34);
    iVar4 = local_34;
    if (local_34 < 9) {
      iVar4 = 8;
    }
  }
  if ((uVar2 >> 9 & 1) == 0) {
    local_38 = iVar4;
  }
  else {
    (**(code **)puVar3)(*param_1,0xd,&local_38);
    iVar1 = local_38;
    if (local_38 <= iVar4) {
      iVar1 = iVar4;
    }
    (**(code **)puVar3)(*param_1,0x35,&local_38);
    if (local_38 <= iVar1) {
      local_38 = iVar1;
    }
  }
  iVar4 = local_38;
  if ((uVar2 >> 0xb & 1) != 0) {
    (**(code **)puVar3)(*param_1,10,&local_3c);
    iVar4 = local_3c;
    if (local_3c <= local_38) {
      iVar4 = local_38;
    }
  }
  if (iVar4 < 0x21 && (uVar2 & 0x40) != 0) {
    iVar4 = 0x20;
  }
  lVar5 = (long)iVar4;
  if (iVar4 < 0x201 && (uVar2 & 0x1a0) != 0) {
    lVar5 = 0x200;
  }
  return lVar5;
}


