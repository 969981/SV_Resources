/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ebaac; name: FUN_027ebaac
 */


void FUN_027ebaac(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  long local_78;
  undefined8 local_70 [2];
  
  puVar8 = PTR_DAT_047da878;
  puVar7 = PTR_DAT_047da870;
  puVar6 = PTR_DAT_047da868;
  lVar13 = *(long *)(param_1 + 0x5e8);
  lVar15 = *(long *)(param_1 + 0x5f0);
  if (lVar13 != lVar15) {
    do {
      FUN_027ff084(&local_78,lVar13);
      if (local_78 != 0) {
        if (*(int *)(local_78 + 0x40) == 1) {
          FUN_027e6e74(&local_100,param_1);
          if (local_100 == 0) {
            local_80 = 0;
          }
          else {
            FUN_027e6fc4(&local_80);
          }
          FUN_027e7058(&local_100);
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047daa50,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          uVar14 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar14;
          FUN_027e7158(auStack_110,&local_80);
          FUN_027ff084(auStack_108,&local_78);
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          FUN_027ff184(&local_100,auStack_110);
          local_120 = (undefined8 *)0x0;
          uStack_118 = 0;
          FUN_0174ab80(uVar14,&local_100,&local_120);
          puVar9 = local_120;
          if (local_120 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_120 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_120 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar12;
                local_70[0] = *puVar9;
                FUN_00c44438(lVar12 + 0x8040,local_70);
              }
            }
            else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
          }
          pcVar10 = local_f8;
          if (local_f8 != (code *)0x0) {
            local_f0 = 0;
            uStack_e8 = 0;
            local_100 = 0;
            local_f8 = (code *)0x0;
            (*pcVar10)(auStack_e0);
          }
          FUN_027ea42c(auStack_108);
          FUN_027e2e30(auStack_110);
          FUN_027e2e30(&local_80);
        }
        else if (*(int *)(local_78 + 0x40) == 0) {
          FUN_027ff114(param_1,&local_78);
        }
      }
      FUN_027ea42c(&local_78);
      lVar13 = lVar13 + 8;
    } while (lVar13 != lVar15);
    lVar13 = *(long *)(param_1 + 0x5e8);
    lVar15 = *(long *)(param_1 + 0x5f0);
    while (lVar15 != lVar13) {
      lVar15 = lVar15 + -8;
      FUN_027ea42c(lVar15);
    }
  }
  *(long *)(param_1 + 0x5f0) = lVar13;
  return;
}


