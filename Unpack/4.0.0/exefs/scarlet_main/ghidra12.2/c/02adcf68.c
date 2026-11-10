/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adcf68; name: FUN_02adcf68
 */


undefined8 FUN_02adcf68(void)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar5 = PTR_DAT_047d48d8;
  puVar4 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar10 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar9;
      __cxa_guard_release(puVar4);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) {
        if ((*(char *)(lVar10 + 0x40) == '\0') ||
           (((((lVar11 = *(long *)(lVar10 + 600), lVar11 == 0 ||
               ((*(char *)(lVar11 + 0x18) == '\0' &&
                ((((*(long *)(lVar11 + 0x10) == 0 || (*(long *)(lVar11 + 8) == 0)) ||
                  (sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + 8), sVar3 == 0)) ||
                 (*(float *)(*(long *)(lVar11 + 8) + 4) < (float)(int)sVar3)))))) &&
              ((lVar11 = *(long *)(lVar10 + 0x278), lVar11 == 0 ||
               ((*(char *)(lVar11 + 0x18) == '\0' &&
                (((*(long *)(lVar11 + 0x10) == 0 || (*(long *)(lVar11 + 8) == 0)) ||
                 ((sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + 8), sVar3 == 0 ||
                  (*(float *)(*(long *)(lVar11 + 8) + 4) < (float)(int)sVar3)))))))))) &&
             ((lVar11 = *(long *)(lVar10 + 0x298), lVar11 == 0 ||
              ((*(char *)(lVar11 + 0x18) == '\0' &&
               (((*(long *)(lVar11 + 0x10) == 0 || (*(long *)(lVar11 + 8) == 0)) ||
                ((sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + 8), sVar3 == 0 ||
                 (*(float *)(*(long *)(lVar11 + 8) + 4) < (float)(int)sVar3)))))))))) &&
            ((lVar11 = *(long *)(lVar10 + 0x2b8), lVar11 == 0 ||
             ((*(char *)(lVar11 + 0x18) == '\0' &&
              ((((*(long *)(lVar11 + 0x10) == 0 || (*(long *)(lVar11 + 8) == 0)) ||
                (sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + 8), sVar3 == 0)) ||
               (*(float *)(*(long *)(lVar11 + 8) + 4) < (float)(int)sVar3)))))))))) {
          uVar6 = FUN_00b0e9ac();
          if (((0xff < uVar6) && ((uVar6 & 0xff) != 0)) && (*(long *)(lVar10 + 0xb00) != 0)) {
            sVar3 = *(short *)(lVar10 + 0x178);
            fVar12 = *(float *)(lVar10 + 0x17c);
            if (sVar3 == *(short *)(lVar10 + 0x484)) {
              fVar12 = fVar12 + *(float *)(lVar10 + 0x488);
            }
            if (sVar3 == *(short *)(lVar10 + 0x694)) {
              fVar12 = fVar12 + *(float *)(lVar10 + 0x698);
            }
            if (sVar3 == *(short *)(lVar10 + 0x8a4)) {
              fVar12 = fVar12 + *(float *)(lVar10 + 0x8a8);
            }
            if ((sVar3 != 0) &&
               ((float)(int)*(short *)(*(long *)(*(long *)(lVar10 + 0xb00) + 0x10) + 8) <= fVar12))
            goto LAB_02add228;
          }
          uVar9 = 0;
        }
        else {
LAB_02add228:
          uVar9 = 1;
        }
        return uVar9;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


