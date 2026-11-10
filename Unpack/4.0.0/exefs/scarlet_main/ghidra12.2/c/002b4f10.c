/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b4f10; name: FUN_002b4f10
 */


void FUN_002b4f10(long param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  byte *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  byte *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_002a4bec(param_1 + 0xf0,param_2,param_2);
    return;
  }
  lVar12 = param_1 + 0x108;
  local_d0 = param_2;
  lVar6 = FUN_002c3ab0(lVar12,param_2,&DAT_03cc9966,&local_d0,&local_60);
  FUN_002b5360(auStack_78,param_1,param_2);
  uVar10 = *(ulong *)(lVar6 + 0x68);
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
  if (4 < uVar10) {
                    /* try { // try from 002b4fa8 to 002b4fdb has its CatchHandler @ 002b5344 */
    uVar10 = FUN_00350fb0(uVar10);
  }
  FUN_002a6424(&local_d0,lVar13 + 0x38,param_2,auStack_78,lVar6 + 0x38,lVar6 + 0x50,uVar10,
               *(char *)(param_1 + 0x18) == '\0');
  uStack_58 = uStack_c8;
  local_60 = local_d0;
  uStack_48 = uStack_b8;
  uStack_50 = local_c0;
  pcVar14 = *(char **)PTR_PTR_047cc6f0;
  sVar7 = strlen(pcVar14);
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar10 = (ulong)(bVar1 >> 1);
    if (sVar7 == uVar10) {
      if (sVar7 == 0xffffffffffffffff) {
LAB_002b5310:
                    /* try { // try from 002b5310 to 002b5317 has its CatchHandler @ 002b533c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar8 = param_2 + 1;
joined_r0x002b503c:
      if ((sVar7 == 0) || (iVar5 = memcmp(pbVar8,pcVar14,sVar7), iVar5 == 0)) goto LAB_002b5234;
      pcVar14 = *(char **)PTR_PTR_047cc6f8;
      sVar7 = strlen(pcVar14);
      if ((bVar1 & 1) != 0) {
        uVar10 = *(ulong *)(param_2 + 8);
        if (sVar7 == uVar10) goto LAB_002b50dc;
        goto LAB_002b514c;
      }
      uVar10 = (ulong)(bVar1 >> 1);
      if (sVar7 == uVar10) goto LAB_002b50b4;
LAB_002b5070:
      pcVar14 = *(char **)PTR_PTR_047cc700;
      sVar7 = strlen(pcVar14);
      if (sVar7 == uVar10) goto LAB_002b508c;
LAB_002b5120:
      pcVar14 = *(char **)PTR_PTR_047cc710;
      sVar7 = strlen(pcVar14);
      if (sVar7 == uVar10) {
LAB_002b51ac:
        pbVar8 = param_2 + 1;
        goto joined_r0x002b51b0;
      }
    }
    else {
      pcVar14 = *(char **)PTR_PTR_047cc6f8;
      sVar7 = strlen(pcVar14);
      if (sVar7 != uVar10) goto LAB_002b5070;
LAB_002b50b4:
      pbVar8 = param_2 + 1;
joined_r0x002b50e8:
      if ((uVar10 == 0) || (iVar5 = memcmp(pbVar8,pcVar14,uVar10), iVar5 == 0)) goto LAB_002b5234;
      pcVar14 = *(char **)PTR_PTR_047cc700;
      sVar7 = strlen(pcVar14);
      if ((bVar1 & 1) != 0) {
        uVar10 = *(ulong *)(param_2 + 8);
        if (sVar7 == uVar10) goto LAB_002b5168;
        goto LAB_002b51c4;
      }
      uVar10 = (ulong)(bVar1 >> 1);
      if (sVar7 != uVar10) goto LAB_002b5120;
LAB_002b508c:
      pbVar8 = param_2 + 1;
joined_r0x002b5174:
      if ((uVar10 == 0) || (iVar5 = memcmp(pbVar8,pcVar14,uVar10), iVar5 == 0)) goto LAB_002b5234;
      pcVar14 = *(char **)PTR_PTR_047cc710;
      sVar7 = strlen(pcVar14);
      if ((bVar1 & 1) == 0) {
        uVar10 = (ulong)(bVar1 >> 1);
        if (sVar7 == uVar10) goto LAB_002b51ac;
      }
      else {
        uVar10 = *(ulong *)(param_2 + 8);
        if (sVar7 == uVar10) goto LAB_002b51f0;
      }
    }
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if (sVar7 == uVar10) {
      if (sVar7 == 0xffffffffffffffff) goto LAB_002b5310;
      pbVar8 = *(byte **)(param_2 + 0x10);
      goto joined_r0x002b503c;
    }
    pcVar14 = *(char **)PTR_PTR_047cc6f8;
    sVar7 = strlen(pcVar14);
    if (sVar7 == uVar10) {
LAB_002b50dc:
      if (uVar10 == 0xffffffffffffffff) {
                    /* try { // try from 002b5318 to 002b531f has its CatchHandler @ 002b5338 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar8 = *(byte **)(param_2 + 0x10);
      goto joined_r0x002b50e8;
    }
LAB_002b514c:
    pcVar14 = *(char **)PTR_PTR_047cc700;
    sVar7 = strlen(pcVar14);
    if (sVar7 == uVar10) {
LAB_002b5168:
      if (uVar10 == 0xffffffffffffffff) {
                    /* try { // try from 002b5320 to 002b5327 has its CatchHandler @ 002b5334 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar8 = *(byte **)(param_2 + 0x10);
      goto joined_r0x002b5174;
    }
LAB_002b51c4:
    pcVar14 = *(char **)PTR_PTR_047cc710;
    sVar7 = strlen(pcVar14);
    if (sVar7 != uVar10) goto LAB_002b5210;
LAB_002b51f0:
    if (uVar10 == 0xffffffffffffffff) {
                    /* try { // try from 002b5328 to 002b532f has its CatchHandler @ 002b5330 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar8 = *(byte **)(param_2 + 0x10);
joined_r0x002b51b0:
    if ((uVar10 == 0) || (iVar5 = memcmp(pbVar8,pcVar14,uVar10), iVar5 == 0)) goto LAB_002b5234;
  }
LAB_002b5210:
                    /* try { // try from 002b5210 to 002b528b has its CatchHandler @ 002b5348 */
  lVar13 = FUN_002c3d70(lVar12,param_2);
  if (param_1 + 0x110 != lVar13) {
    FUN_002c3e80(lVar12);
  }
LAB_002b5234:
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (4 < *(ulong *)(lVar6 + 0x68)) {
    FUN_00350fd0();
  }
  *(undefined8 *)(lVar6 + 0x68) = 0;
  uVar9 = FUN_0036a600(&local_60,1);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  if ((local_60 != (byte *)0x0) && (plVar11 = *(long **)local_60, plVar11 != (long *)0x0)) {
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(local_60 + 0x18))(*(undefined8 *)(local_60 + 0x20));
    }
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = (byte *)0x1;
  plVar11 = (long *)(param_1 + 8);
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_c0 = *(undefined8 *)(param_1 + 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_LAB_047cc798;
  } while (cVar2 != '\0');
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x50) = puVar4;
  *(long *)(param_1 + 0x58) = param_1;
                    /* try { // try from 002b52d8 to 002b530f has its CatchHandler @ 002b5340 */
  iVar5 = FUN_0036cee0(*(undefined8 *)(param_1 + 0x20),&local_d0,1,param_1 + 0x48);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002c3d2c(auStack_78,local_70);
  return;
}


