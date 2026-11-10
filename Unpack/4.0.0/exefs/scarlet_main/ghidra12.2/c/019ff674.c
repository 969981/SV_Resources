/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ff674; name: FUN_019ff674
 */


void FUN_019ff674(long param_1,uint param_2)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  short sVar12;
  byte *__s;
  long *plVar13;
  byte local_98 [16];
  byte *local_88;
  long **local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 auStack_60 [16];
  long *local_38;
  
  lVar10 = *(long *)(param_1 + 0x240);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_019ff6f0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019ff6f0:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        FUN_0135d328(auStack_60,*(undefined8 *)(param_1 + 8),0);
        std::to_string(param_2 & 0xffff);
        if ((local_98[0] & 1) == 0) {
          __s = (byte *)((ulong)local_98 | 1);
        }
        else {
          __s = local_88;
          if (local_88 == (byte *)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_80 = *(long ***)PTR_DAT_047d3e30;
            pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
            local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
            goto LAB_019ff790;
          }
        }
        local_70 = strlen((char *)__s);
        bVar2 = *__s;
        local_80 = (long **)&DAT_cbf29ce484222645;
        pbVar11 = __s;
        while (bVar2 != 0) {
          pbVar11 = pbVar11 + 1;
          local_80 = (long **)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar11;
        }
        local_68 = (long *)0x0;
        pbStack_78 = __s;
LAB_019ff790:
        FUN_01221800(&local_38,lVar10 + 0x340,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (((local_98[0] & 1) != 0) && (local_88 != (byte *)0x0)) {
          lVar9 = tpidr_el0;
          plVar13 = *(long **)(lVar9 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar9 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,local_88,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,local_88,0,8);
          }
        }
        local_80 = &local_38;
        FUN_01946068(lVar10 + 0xe0,&local_80);
        uVar6 = FUN_01e24054(param_1);
        FUN_015191e8(param_1,param_2,uVar6);
        *(short *)(param_1 + 0x3b8) = (short)param_2;
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        FUN_0135d2ec(auStack_60);
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
        return;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


