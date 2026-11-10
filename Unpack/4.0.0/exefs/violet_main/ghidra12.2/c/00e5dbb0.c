/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5dbb0; name: FUN_00e5dbb0
 */


void FUN_00e5dbb0(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_00e5e4c0();
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  if (lVar6 != 0) {
    FUN_00e5e0a4();
  }
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047da800), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar6 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar6;
  if (lVar6 != 0) {
    puVar11 = *(undefined8 **)(lVar6 + 0x98);
    puVar13 = *(undefined8 **)(lVar6 + 0xa0);
    if (puVar11 != puVar13) {
      (**(code **)(*(long *)*puVar11 + 0x68))();
      while (puVar11 = puVar11 + 1, puVar11 != puVar13) {
        (**(code **)(*(long *)*puVar11 + 0x68))();
      }
    }
    FUN_00e5e24c(lVar6);
    if ((*(long *)(lVar6 + 0x88) != 0) && (uVar7 = FUN_00e5ee48(), (uVar7 & 1) == 0)) {
      FUN_00e5ed30(*(long *)**(undefined8 **)(lVar6 + 0x88) + 0x6c0);
    }
  }
  if (((*PTR_DAT_047e2090 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar5 != 0))
  {
    FUN_00100190(&LAB_02bddbc0,PTR_DAT_047e2098,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2090);
  }
  lVar6 = *(long *)PTR_DAT_047e2098;
  *(long *)PTR_DAT_047e20a0 = lVar6;
  if (lVar6 != 0) {
    FUN_00e5eec8();
  }
  if (((*PTR_DAT_047da868 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047da868), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da868);
  }
  lVar6 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar6;
  if (lVar6 != 0) {
    puVar11 = *(undefined8 **)(lVar6 + 0x70);
    puVar13 = puVar11;
    if (*(long *)(lVar6 + 0x78) != 0) {
      puVar13 = puVar11 + *(long *)(lVar6 + 0x78) * 0x12;
    }
    if (puVar13 != puVar11) {
      do {
        if ((code *)*puVar11 != (code *)0x0) {
          (*(code *)*puVar11)(puVar11 + 4);
        }
        if (((puVar11[0x10] == 0) || (lVar8 = *(long *)(puVar11[0x10] + 0x10), lVar8 == 0)) ||
           (uVar7 = (**(code **)(*(long *)(lVar8 + -0x28) + 0x70))(), (uVar7 & 1) == 0)) {
          lVar8 = *(long *)(lVar6 + 0x70);
          lVar10 = *(long *)(lVar6 + 0x78);
          puVar12 = (undefined8 *)(lVar8 + lVar10 * 0x90);
          puVar13 = puVar11 + 0x12;
          if (puVar13 != puVar12) {
            pcVar9 = (code *)puVar11[1];
            if (pcVar9 != (code *)0x0) {
              puVar11[2] = 0;
              puVar11[3] = 0;
              *puVar11 = 0;
              puVar11[1] = 0;
              (*pcVar9)(puVar11 + 4);
            }
            if ((code *)puVar11[0x15] != (code *)0x0) {
              (*(code *)puVar11[0x15])(puVar11 + 0x16,puVar11 + 4);
              puVar11[1] = puVar11[0x13];
              puVar11[3] = puVar11[0x15];
              *puVar11 = *puVar13;
              pcVar9 = (code *)puVar11[0x13];
              puVar11[2] = puVar11[0x14];
              if (pcVar9 != (code *)0x0) {
                puVar11[0x14] = 0;
                puVar11[0x15] = 0;
                *puVar13 = 0;
                puVar11[0x13] = 0;
                (*pcVar9)(puVar11 + 0x16);
              }
            }
            FUN_00e5e91c(puVar11 + 0x10,puVar11 + 0x22);
            puVar13 = puVar11 + 0x24;
            if (puVar13 != puVar12) {
              pcVar9 = (code *)puVar11[0x13];
              if (pcVar9 != (code *)0x0) {
                puVar11[0x14] = 0;
                puVar11[0x15] = 0;
                puVar11[0x12] = 0;
                puVar11[0x13] = 0;
                (*pcVar9)(puVar11 + 0x16);
              }
              if ((code *)puVar11[0x27] != (code *)0x0) {
                (*(code *)puVar11[0x27])(puVar11 + 0x28,puVar11 + 0x16);
                puVar11[0x15] = puVar11[0x27];
                puVar11[0x12] = *puVar13;
                puVar11[0x13] = puVar11[0x25];
                puVar11[0x14] = puVar11[0x26];
                pcVar9 = (code *)puVar11[0x25];
                if (pcVar9 != (code *)0x0) {
                  puVar11[0x26] = 0;
                  puVar11[0x27] = 0;
                  *puVar13 = 0;
                  puVar11[0x25] = 0;
                  (*pcVar9)(puVar11 + 0x28);
                }
              }
              FUN_00e5e91c(puVar11 + 0x22,puVar11 + 0x34);
              if (puVar11 + 0x36 != puVar12) {
                puVar13 = puVar11;
                do {
                  pcVar9 = (code *)puVar13[0x25];
                  if (pcVar9 != (code *)0x0) {
                    puVar13[0x26] = 0;
                    puVar13[0x27] = 0;
                    puVar13[0x24] = 0;
                    puVar13[0x25] = 0;
                    (*pcVar9)(puVar13 + 0x28);
                  }
                  if ((code *)puVar13[0x39] != (code *)0x0) {
                    (*(code *)puVar13[0x39])(puVar13 + 0x3a,puVar13 + 0x28);
                    pcVar9 = (code *)puVar13[0x37];
                    puVar13[0x24] = puVar13[0x36];
                    puVar13[0x25] = pcVar9;
                    puVar13[0x26] = puVar13[0x38];
                    puVar13[0x27] = puVar13[0x39];
                    if (pcVar9 != (code *)0x0) {
                      puVar13[0x38] = 0;
                      puVar13[0x39] = 0;
                      puVar13[0x36] = 0;
                      puVar13[0x37] = 0;
                      (*pcVar9)(puVar13 + 0x3a);
                    }
                  }
                  FUN_00e5e91c(puVar13 + 0x34,puVar13 + 0x46);
                  puVar13 = puVar13 + 0x12;
                } while ((undefined8 *)(lVar8 + lVar10 * 0x90 + -0x1b0) != puVar13);
              }
            }
            lVar8 = *(long *)(lVar6 + 0x70);
            lVar10 = *(long *)(lVar6 + 0x78);
          }
          lVar8 = lVar8 + lVar10 * 0x90;
          if (*(long *)(lVar8 + -0x10) != 0) {
            psVar1 = (short *)(*(long *)(lVar8 + -0x10) + 0x18);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              FUN_0116e168();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
          }
          pcVar9 = *(code **)(lVar8 + -0x88);
          if (pcVar9 != (code *)0x0) {
            *(undefined8 *)(lVar8 + -0x80) = 0;
            *(undefined8 *)(lVar8 + -0x78) = 0;
            *(undefined8 *)(lVar8 + -0x90) = 0;
            *(undefined8 *)(lVar8 + -0x88) = 0;
            (*pcVar9)(lVar8 + -0x70);
          }
          lVar8 = *(long *)(lVar6 + 0x78) + -1;
          *(long *)(lVar6 + 0x78) = lVar8;
        }
        else {
          lVar8 = *(long *)(lVar6 + 0x78);
          puVar11 = puVar11 + 0x12;
        }
        puVar13 = *(undefined8 **)(lVar6 + 0x70);
        if (lVar8 != 0) {
          puVar13 = *(undefined8 **)(lVar6 + 0x70) + lVar8 * 0x12;
        }
      } while (puVar13 != puVar11);
    }
  }
  return;
}


