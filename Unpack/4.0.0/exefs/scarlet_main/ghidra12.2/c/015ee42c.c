/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ee42c; name: FUN_015ee42c
 */


void FUN_015ee42c(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  float fVar11;
  ulong uVar12;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  local_90 = 0x157c741199420832;
  pcStack_88 = "FadeColor";
  local_80 = 9;
  local_78 = (long *)0x0;
  FUN_015eea10(&local_70,param_1,&local_90);
  uVar3 = plStack_58._0_4_;
  uVar2 = local_60;
  cVar1 = (char)local_70;
  if ((char)local_70 != '\0') {
    local_70 = local_70 & 0xffffffffffffff00;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_70 = 0x1b56d66692e6806b;
  pcStack_68 = "Alpha";
  local_60 = 5;
  plStack_58 = (long *)0x0;
  uVar7 = FUN_01180d38(param_1,&local_70);
  uVar12 = 0x437f0000;
  if ((uVar7 & 0xff) != 0) {
    uVar12 = uVar7 >> 0x20;
  }
  if (plStack_58 != (long *)0x0) {
    (**(code **)(*plStack_58 + 0x20))();
  }
  iVar4 = FUN_014f3a04(param_1);
  iVar5 = FUN_014f3a34(param_1);
  fVar11 = (float)FUN_014f39f8();
  if (((*PTR_DAT_047d8658 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8db0,PTR_DAT_047d8660,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8658);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d8660;
  *(undefined8 *)PTR_DAT_047d8668 = uVar8;
  local_70 = 0x4596c46a040ed6ad;
  pcStack_68 = "SystemColorFade";
  local_60 = 0xf;
  plStack_58 = (long *)0x0;
  lVar9 = FUN_014fbaa8(uVar8,&local_70);
  if (plStack_58 != (long *)0x0) {
    (**(code **)(*plStack_58 + 0x20))();
  }
  if (lVar9 != 0) {
    bVar10 = -(cVar1 == '\0');
    uVar7 = CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~bVar10,
                     CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~bVar10,
                              CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~bVar10,
                                       CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~bVar10,
                                                CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~bVar10,
                                                         CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                  ~bVar10,CONCAT11((byte)((ulong)
                                                  uVar2 >> 8) & ~bVar10,(byte)uVar2 & ~bVar10)))))))
    ;
    FUN_014f39f0((float)(uint)(iVar4 - iVar5) / fVar11,lVar9);
    FUN_015ee668(uVar7,uVar7 >> 0x20,
                 CONCAT13((byte)((uint)uVar3 >> 0x18) & ~bVar10,
                          CONCAT12((byte)((uint)uVar3 >> 0x10) & ~bVar10,
                                   CONCAT11((byte)((uint)uVar3 >> 8) & ~bVar10,(byte)uVar3 & ~bVar10
                                           ))),uVar12,lVar9);
    local_70 = 0x4596c46a040ed6ad;
    pcStack_68 = "SystemColorFade";
    local_60 = 0xf;
    plStack_58 = (long *)0x0;
    FUN_015ee67c(&local_70);
    if (plStack_58 != (long *)0x0) {
      (**(code **)(*plStack_58 + 0x20))();
    }
  }
  return;
}


