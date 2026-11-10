/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200705c; name: FUN_0200705c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200705c(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a0 [56];
  undefined8 local_68;
  undefined2 local_48;
  undefined1 local_46;
  
  uVar12 = 0;
  *(byte *)((long)param_1 + 0x25) = *(byte *)((long)param_1 + 0x25) & 0xfe;
  puVar5 = PTR_DAT_047d9210;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(float *)(param_1 + 4) <= *(float *)((long)param_1 + 4)) {
      if (((*PTR_DAT_047d9210 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d9210);
      }
      puVar7 = PTR_DAT_047d9220;
      puVar6 = PTR_DAT_047d9218;
      *(undefined8 *)PTR_DAT_047d9220 = *(undefined8 *)PTR_DAT_047d9218;
      uVar11 = FUN_020073f8();
      if ((uVar11 & 1) == 0) {
        uVar12 = 0;
        uVar9 = 0;
      }
      else {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d9210);
        }
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        uVar14 = FUN_02007404();
        fVar15 = (float)*param_1 + (float)_DAT_03cab820;
        fVar16 = (float)((ulong)*param_1 >> 0x20) + (float)((ulong)_DAT_03cab820 >> 0x20);
        local_68 = 0;
        local_46 = 0;
        local_48 = 0;
        uVar9 = FUN_00d6fedc(CONCAT44(fVar16,fVar15),
                             CONCAT44((float)((ulong)uVar14 >> 0x20) * 100.0 + fVar16,
                                      (float)uVar14 * 100.0 + fVar15),param_2,0x60042,auStack_a0,1,
                             &local_48);
        uVar12 = -(uVar9 & 1);
        uVar9 = -(~uVar9 & 1);
        FUN_012c7df0(&local_68);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    uVar12 = 0;
    *(byte *)((long)param_1 + 0x25) = *(byte *)((long)param_1 + 0x25) & 0xfe;
    if (param_2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if (*(float *)(param_1 + 4) <= *(float *)((long)param_1 + 4)) {
        if (((DAT_0483c340 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0483c340), iVar10 != 0))
        {
          uRam000000000483c248 = _UNK_03cac248;
          _DAT_0483c240 = _DAT_03cac240;
          uRam000000000483c258 = _UNK_03caba28;
          _DAT_0483c250 = _DAT_03caba20;
          uRam000000000483c268 = _UNK_03caba38;
          _DAT_0483c260 = _DAT_03caba30;
          uRam000000000483c278 = _UNK_03cab858;
          _DAT_0483c270 = _DAT_03cab850;
          uRam000000000483c288 = _UNK_03cabe88;
          _DAT_0483c280 = _DAT_03cabe80;
          uRam000000000483c298 = _UNK_03cabfa8;
          _DAT_0483c290 = _DAT_03cabfa0;
          uRam000000000483c2a8 = _UNK_03cab3d8;
          _DAT_0483c2a0 = _DAT_03cab3d0;
          uRam000000000483c2b8 = _UNK_03cabfb8;
          _DAT_0483c2b0 = _DAT_03cabfb0;
          uRam000000000483c2c8 = _UNK_03cab908;
          _DAT_0483c2c0 = _DAT_03cab900;
          uRam000000000483c2d8 = _UNK_03cab2f8;
          _DAT_0483c2d0 = _DAT_03cab2f0;
          uRam000000000483c2e8 = _UNK_03caa828;
          _DAT_0483c2e0 = _DAT_03caa820;
          uRam000000000483c2f8 = _UNK_03cab678;
          _DAT_0483c2f0 = _DAT_03cab670;
          uRam000000000483c308 = _UNK_03cab3e8;
          _DAT_0483c300 = _DAT_03cab3e0;
          uRam000000000483c318 = _UNK_03cac128;
          _DAT_0483c310 = _DAT_03cac120;
          uRam000000000483c328 = _UNK_03cab018;
          _DAT_0483c320 = _DAT_03cab010;
          uRam000000000483c338 = _UNK_03caaaf8;
          _DAT_0483c330 = _DAT_03caaaf0;
          __cxa_guard_release(&DAT_0483c340);
        }
        uVar14 = _DAT_03cab820;
        lVar13 = 0;
        uVar9 = 0;
        uVar12 = 0;
        do {
          fVar15 = (float)*param_1 + (float)uVar14;
          fVar16 = (float)((ulong)*param_1 >> 0x20) + (float)((ulong)uVar14 >> 0x20);
          local_68 = 0;
          local_46 = 0;
          local_48 = 0;
          uVar11 = FUN_00d6fedc(CONCAT44(fVar16,fVar15),
                                CONCAT44((float)((ulong)*(undefined8 *)
                                                         (&DAT_0483c240 + lVar13 * 0x10) >> 0x20) *
                                         100.0 + fVar16,
                                         (float)*(undefined8 *)(&DAT_0483c240 + lVar13 * 0x10) *
                                         100.0 + fVar15),param_2,0x60042,auStack_a0,1,&local_48);
          uVar4 = 1 << (ulong)((uint)lVar13 & 0x1f);
          bVar8 = (uVar11 & 1) == 0;
          uVar1 = uVar4;
          if (bVar8) {
            uVar1 = 0;
          }
          uVar2 = 0;
          if (bVar8) {
            uVar2 = uVar4;
          }
          uVar12 = uVar1 | uVar12;
          uVar9 = uVar2 | uVar9;
          FUN_012c7df0(&local_68);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x10);
      }
    }
  }
  *(uint *)(param_1 + 3) = uVar9 & 0xffff | uVar12 << 0x10;
  uVar11 = param_1[2];
  param_1[2] = uVar11 & 0xffffffffffffffcf;
  if (*(float *)(param_1 + 4) <= *(float *)((long)param_1 + 4)) {
    uVar3 = 0x20;
    if ((*(byte *)((long)param_1 + 0x25) & 1) != 0) {
      uVar3 = 0x10;
    }
    param_1[2] = uVar11 & 0xffffffffffffffcf | uVar3;
  }
  return;
}


