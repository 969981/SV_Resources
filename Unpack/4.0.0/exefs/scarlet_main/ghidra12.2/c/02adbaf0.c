/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adbaf0; name: FUN_02adbaf0
 */


void FUN_02adbaf0(short *param_1)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_98 [72];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar6 = PTR_DAT_047d48d8;
  puVar5 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
LAB_02adbc5c:
      *param_1 = 0;
      memset(param_1 + 2,0,0x48);
      return;
    }
    lVar10 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar6) {
        if (*(long *)(lVar10 + 0xb00) != 0) {
          fVar11 = *(float *)(lVar10 + 0x17c);
          sVar3 = *(short *)(lVar10 + 0x178);
          sVar4 = *(short *)(lVar10 + 0x17a);
          memcpy(auStack_98,(void *)(lVar10 + 0x180),0x44);
          if (sVar3 == *(short *)(lVar10 + 0x484)) {
            fVar11 = fVar11 + *(float *)(lVar10 + 0x488);
          }
          if (sVar3 == *(short *)(lVar10 + 0x694)) {
            fVar11 = fVar11 + *(float *)(lVar10 + 0x698);
          }
          if (sVar3 == *(short *)(lVar10 + 0x8a4)) {
            fVar11 = fVar11 + *(float *)(lVar10 + 0x8a8);
          }
          *param_1 = sVar3;
          param_1[1] = sVar4;
          *(float *)(param_1 + 2) = fVar11;
          memcpy(param_1 + 4,auStack_98,0x44);
          return;
        }
        goto LAB_02adbc5c;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


