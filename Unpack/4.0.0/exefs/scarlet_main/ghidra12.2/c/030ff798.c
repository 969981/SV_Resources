/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ff798; name: FUN_030ff798
 */


void FUN_030ff798(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  void *__dest;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar10 = tpidr_el0;
  lVar4 = *(long *)(lVar10 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar4;
  }
  plVar12 = *(long **)(lVar4 + 0x3e0);
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))
                ("createNonmergedCompoundSilhouettes",0x22,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar6 = (undefined8 *)plVar12[2];
    uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar12[3]) && (plVar12[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtcreateNonmergedCompoundSilhouettes";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar6 = (undefined8 *)plVar12[2];
      uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar12[3]) && (plVar12[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
  }
  if (param_2 != param_3) {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      puVar6 = (undefined8 *)*param_2;
      local_88 = puVar6[1];
      uStack_90 = *puVar6;
      local_80 = puVar6[2];
      uStack_78 = puVar6[3];
      lVar10 = (**(code **)(*(long *)puVar6[4] + 0x28))
                         (param_1,(long *)puVar6[4],&uStack_90,param_4);
      uVar5 = (ulong)*(uint *)(lVar10 + 0x30);
      if (0 < (int)*(uint *)(lVar10 + 0x30)) {
        uVar14 = 0;
        lVar4 = 4;
        do {
          lVar9 = (long)*(int *)(*(long *)(lVar10 + 0x28) + uVar14 * 4);
          lVar8 = *(long *)(lVar10 + 0x18);
          iVar3 = (int)param_5[1];
          lVar7 = (long)iVar3;
          piVar11 = (int *)(lVar10 + 0x20);
          if (uVar14 != (int)uVar5 - 1) {
            piVar11 = (int *)(*(long *)(lVar10 + 0x28) + lVar4);
          }
          lVar13 = *piVar11 - lVar9;
          if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) <= iVar3) {
            FUN_030ffaa8(param_5,PTR_PTR_047d1a50 + 0x20,lVar7 + 1);
            iVar3 = (int)param_5[1];
          }
          *(int *)(param_5 + 1) = (int)(lVar7 + 1);
          puVar6 = (undefined8 *)(*param_5 + (long)iVar3 * 0x10);
          *puVar6 = 0;
          piVar11 = (int *)(puVar6 + 1);
          piVar11[0] = 0;
          piVar11[1] = -0x80000000;
          uVar14 = uVar14 + 1;
          if ((int)lVar13 < 1) {
            __dest = (void *)0x0;
          }
          else {
            FUN_02f0842c(puVar6,puVar1,lVar13);
            __dest = (void *)*puVar6;
          }
          memcpy(__dest,(void *)(lVar8 + lVar9 * 0x10),lVar13 * 0x10);
          *piVar11 = (int)lVar13;
          uVar5 = (ulong)*(int *)(lVar10 + 0x30);
          lVar4 = lVar4 + 4;
        } while ((long)uVar14 < (long)uVar5);
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar6 = (undefined8 *)plVar12[2];
      uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar12[3]) && (plVar12[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
    puVar6 = (undefined8 *)plVar12[2];
    uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar12[3]) && (plVar12[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (*(code **)(lVar10 + 0x20) != (code *)0x0) {
      (**(code **)(lVar10 + 0x20))(*(undefined8 *)(lVar10 + 0x28));
    }
  }
  return;
}


