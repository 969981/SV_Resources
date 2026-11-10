/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02add480; name: FUN_02add480
 */


void FUN_02add480(undefined1 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_140 [92];
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  long *local_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  puVar7 = PTR_DAT_047d48d8;
  puVar6 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar13 + 0x1c0);
  plVar2 = *(long **)(lVar13 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      *param_1 = 0;
      param_1[0x100] = 0;
      return;
    }
    lVar13 = *plVar1;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*puVar6 & 1) == 0) &&
       (local_48 = plVar10, iVar9 = __cxa_guard_acquire(puVar6), plVar10 = local_48, iVar9 != 0)) {
      uVar12 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
      plVar10 = local_48;
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar7) {
        uVar8 = FUN_00b0e9ac();
        if (((0xff < uVar8) && ((uVar8 & 0xff) != 0)) && (*(long *)(lVar13 + 0xb00) != 0)) {
          sVar4 = *(short *)(lVar13 + 0x178);
          fVar18 = *(float *)(lVar13 + 0x17c);
          if (sVar4 == *(short *)(lVar13 + 0x484)) {
            fVar18 = fVar18 + *(float *)(lVar13 + 0x488);
          }
          if (sVar4 == *(short *)(lVar13 + 0x694)) {
            fVar18 = fVar18 + *(float *)(lVar13 + 0x698);
          }
          if (sVar4 == *(short *)(lVar13 + 0x8a4)) {
            fVar18 = fVar18 + *(float *)(lVar13 + 0x8a8);
          }
          if ((sVar4 != 0) &&
             ((float)(int)*(short *)(*(long *)(*(long *)(lVar13 + 0xb00) + 0x10) + 8) <= fVar18)) {
            FUN_02add878(auStack_140,lVar13,0xffffffff,lVar13 + 0xb00);
            FUN_02addd90(lVar13);
            goto LAB_02add810;
          }
        }
        if (*(char *)(lVar13 + 0x40) == '\0') {
LAB_02add858:
          *param_1 = 0;
          param_1[0x100] = 0;
          return;
        }
        lVar16 = *(long *)(lVar13 + 0x2b8);
        if ((lVar16 == 0) ||
           ((lVar14 = *(long *)(lVar16 + 0x10), *(char *)(lVar16 + 0x18) == '\0' &&
            (((lVar14 == 0 || (*(long *)(lVar16 + 8) == 0)) ||
             ((*(short *)(lVar14 + 8) == 0 ||
              (*(float *)(*(long *)(lVar16 + 8) + 4) < (float)(int)*(short *)(lVar14 + 8))))))))) {
          lVar14 = *(long *)(lVar13 + 600);
          lVar16 = lVar13 + 600;
          if ((*(char *)(lVar14 + 0x18) != '\0') ||
             ((((*(long *)(lVar14 + 0x10) != 0 && (*(long *)(lVar14 + 8) != 0)) &&
               (sVar4 = *(short *)(*(long *)(lVar14 + 0x10) + 8), sVar4 != 0)) &&
              ((float)(int)sVar4 <= *(float *)(*(long *)(lVar14 + 8) + 4))))) {
            uVar12 = 0;
          }
          else {
            lVar14 = *(long *)(lVar13 + 0x278);
            lVar16 = lVar13 + 0x278;
            if ((*(char *)(lVar14 + 0x18) != '\0') ||
               (((*(long *)(lVar14 + 0x10) != 0 && (*(long *)(lVar14 + 8) != 0)) &&
                ((sVar4 = *(short *)(*(long *)(lVar14 + 0x10) + 8), sVar4 != 0 &&
                 ((float)(int)sVar4 <= *(float *)(*(long *)(lVar14 + 8) + 4))))))) {
              uVar12 = 1;
            }
            else {
              lVar14 = *(long *)(lVar13 + 0x298);
              lVar16 = lVar13 + 0x298;
              if ((*(char *)(lVar14 + 0x18) == '\0') &&
                 (((*(long *)(lVar14 + 0x10) == 0 || (*(long *)(lVar14 + 8) == 0)) ||
                  ((sVar4 = *(short *)(*(long *)(lVar14 + 0x10) + 8), sVar4 == 0 ||
                   (*(float *)(*(long *)(lVar14 + 8) + 4) < (float)(int)sVar4))))))
              goto LAB_02add858;
              uVar12 = 2;
            }
          }
          FUN_02add878(auStack_140,lVar13,uVar12,lVar16);
        }
        else {
          uVar3 = *(undefined4 *)(lVar14 + 4);
          uVar5 = *(undefined2 *)(lVar14 + 2);
          FUN_02add878(auStack_140,lVar13,0xfffffffe,lVar13 + 0x2b8);
          uVar11 = FUN_02ade0f4(lVar13,uVar5,uVar3,0);
          if ((uVar11 & 1) != 0) {
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0xb00) + 0x10);
            local_d4 = puVar17[2];
            local_e4 = *puVar17;
            local_dc = puVar17[1];
            local_cc = *(undefined4 *)(puVar17 + 3);
            local_c8 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xb00) + 8) + 8);
          }
          cVar15 = *(char *)(lVar13 + 0x4d1) + *(char *)(lVar13 + 0x1c5) + *(char *)(lVar13 + 0x6e1)
                   + *(char *)(lVar13 + 0x8f1);
          if ('\x02' < cVar15) {
            cVar15 = '\x03';
          }
          local_c4 = (int)cVar15;
        }
LAB_02add810:
        memcpy(param_1,auStack_140,0x100);
        param_1[0x100] = 1;
        return;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


