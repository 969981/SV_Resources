/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034d240; name: FUN_0034d240
 */


undefined8 FUN_0034d240(long param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar11 = *(ulong *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uStack_68 = 0;
  local_70 = 0;
  local_60 = &LAB_0034d380;
  puStack_58 = &LAB_0034d390;
  uVar4 = 0xf;
  if (param_3 != 0) {
    uVar4 = 0x1f;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  iVar3 = FUN_0037c060(&local_a0,0xffffffff,8,uVar4,8,0,"1.2.11.f-NINTENDO-SDK-v1",0x70);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar3 = FUN_0034d3a0(&local_a0,param_1,param_2,PTR_FUN_047ccdc0);
  if ((iVar3 == 0) || (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_2 + 0x20))) {
    if (uVar11 < *(ulong *)(param_2 + 0x10)) {
      uVar9 = uVar11;
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_2 + 8) + uVar9 * 0x20);
        if ((puVar5 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(param_2 + 0x10));
    }
    uVar8 = 0;
    *(ulong *)(param_2 + 0x10) = uVar11;
    *(undefined8 *)(param_2 + 0x20) = uVar10;
  }
  else {
    uVar8 = 1;
  }
  FUN_0037c380(&local_a0);
  return uVar8;
}


