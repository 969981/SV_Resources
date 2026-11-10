/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfc3d0; name: FUN_01cfc3d0
 */


undefined8 FUN_01cfc3d0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_188 [3];
  undefined1 auStack_170 [288];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined1 *)FUN_01cfb300(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  uVar5 = FUN_01cfc2a0(param_1,3);
  if (((DAT_0481c888 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0481c888), iVar2 != 0)) {
    DAT_0482ca50 = '\x01';
    __cxa_guard_release(&DAT_0481c888);
  }
  pcVar1 = (code *)PTR_FUN_047d7048;
  if (DAT_0482ca50 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_01cfc570(auStack_170,uVar5);
  switch(*puVar3) {
  case 0:
  case 1:
    lVar6 = *(long *)(puVar3 + 8);
    if (lVar6 != 0) {
LAB_01cfc474:
      (*pcVar1)(&local_50,lVar6,uVar4,auStack_170);
      goto LAB_01cfc4dc;
    }
    break;
  case 2:
    if ((*(long *)(puVar3 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(puVar3 + 8) + 0x10), lVar6 != 0)) {
      lVar6 = lVar6 + -0x28;
      goto LAB_01cfc474;
    }
    break;
  case 3:
    FUN_01cfc674(local_188,puVar3 + 8);
    if (local_188[0] != 0) {
      (*pcVar1)(&local_50,local_188[0],uVar4,auStack_170);
      FUN_01cfc6c0(local_188);
      goto LAB_01cfc4dc;
    }
    FUN_01cfc6c0(local_188);
  }
  local_50 = 0;
  uStack_48 = 0;
LAB_01cfc4dc:
  FUN_01cfc740(local_188,&local_50);
  FUN_01cfc798(&local_50);
  FUN_01cfc8a8(auStack_170);
  FUN_01cfbf80(param_1,local_188);
  FUN_01cfc058(local_188);
  return 1;
}


