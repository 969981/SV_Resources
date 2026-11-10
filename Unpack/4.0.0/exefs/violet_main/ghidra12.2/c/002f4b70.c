/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f4b70; name: FUN_002f4b70
 */


void FUN_002f4b70(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong *param_4,char *param_5
                 ,char *param_6,undefined8 param_7)

{
  char *__s;
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t sVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  void *__dest;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 local_74;
  
  if ((param_4 == (ulong *)0x0) || (param_5 == (char *)0x0)) {
LAB_002f4cc0:
    *param_1 = 0;
    return;
  }
  uVar13 = param_4[1];
  if (uVar13 == 0) {
    uVar13 = FUN_002f617c();
    if (uVar13 == 0) goto LAB_002f4cc0;
    uVar17 = FUN_002f61c8();
  }
  else {
    uVar17 = 0;
  }
  puVar8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x70);
  if (puVar8 == (undefined8 *)0x0) goto LAB_002f4de8;
  local_b8 = (undefined8 *)*param_2;
  *param_2 = 0;
  local_c0 = (undefined8 *)*param_3;
  *param_3 = 0;
                    /* try { // try from 002f4c00 to 002f4c17 has its CatchHandler @ 002f4fc0 */
  FUN_002f48d0(puVar8,&DAT_03bdfd99,&local_b8,&local_c0);
  puVar4 = local_c0;
  puVar3 = local_b8;
  if (local_c0 != (undefined8 *)0x0) {
    plVar11 = local_c0 + 1;
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)*local_c0)(local_c0);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      puVar3 = local_b8;
    }
  }
  local_b8 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    plVar11 = puVar3 + 1;
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0049e790(PTR_LAB_047cba48,puVar3);
    }
  }
  __s = "";
  if (param_6 != (char *)0x0) {
    __s = param_6;
  }
  *puVar8 = &PTR_FUN_04493fa0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar14 = puVar8 + 7;
  *puVar14 = 0;
  sVar9 = strlen(__s);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 002f4f3c to 002f4f43 has its CatchHandler @ 002f4f50 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    pvVar10 = (void *)((long)puVar8 + 0x51);
    *(char *)(puVar8 + 10) = (char)((int)sVar9 << 1);
    if (sVar9 != 0) goto LAB_002f4cf0;
  }
  else {
    uVar15 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar15);
    puVar8[10] = uVar15 | 1;
    puVar8[0xb] = sVar9;
    puVar8[0xc] = pvVar10;
LAB_002f4cf0:
    memcpy(pvVar10,__s,sVar9);
  }
  *(undefined1 *)((long)pvVar10 + sVar9) = 0;
  puVar8[0xd] = param_4 + 2;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  sVar9 = strlen(param_5);
                    /* try { // try from 002f4d20 to 002f4d2f has its CatchHandler @ 002f4f60 */
  FUN_0038ee90(param_5,sVar9,&local_d0,&local_e0);
  uVar15 = local_c8;
  pvVar10 = local_d0;
  if (local_d0 == (void *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    bVar1 = (byte)*puVar14;
  }
  else {
    if (0xffffffffffffffef < local_c8) {
                    /* try { // try from 002f4f44 to 002f4f4b has its CatchHandler @ 002f4f4c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_c8 < 0x17) {
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)local_c8 << 1));
      __dest = (void *)((ulong)&local_b0 | 1);
      if (local_c8 != 0) goto LAB_002f4dac;
    }
    else {
      uVar16 = local_c8 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
      local_b0 = uVar16 | 1;
      uStack_a8 = uVar15;
      local_a0 = __dest;
LAB_002f4dac:
      memcpy(__dest,pvVar10,uVar15);
    }
    *(undefined1 *)((long)__dest + uVar15) = 0;
    bVar1 = (byte)*puVar14;
  }
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,puVar8[9]);
  }
  puVar8[9] = local_a0;
  puVar8[8] = uStack_a8;
  *puVar14 = local_b0;
LAB_002f4de8:
  plVar11 = (long *)*param_4;
  if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = plVar11[1] != 0;
  }
  local_74 = 0x100000000;
  local_b0 = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_87 = 0;
  local_80 = 0;
  uStack_a8 = uVar13;
  local_a0 = (void *)uVar17;
                    /* try { // try from 002f4e30 to 002f4e7f has its CatchHandler @ 002f5024 */
  local_90 = (void *)FUN_002f5cc0(&uStack_88);
  if (bVar5) {
    local_b0 = *param_4;
  }
  local_98 = FUN_002f57c0();
  local_80 = (undefined1)param_7;
  uStack_7f = (undefined7)((ulong)param_7 >> 8);
  uVar6 = FUN_002f5880((int)param_4[5]);
  local_74 = CONCAT44(local_74._4_4_,uVar6);
  uVar6 = FUN_002f5880(*(undefined4 *)((long)param_4 + 0x2c));
  local_74 = CONCAT44(uVar6,(undefined4)local_74);
  iVar7 = FUN_002feb80(&local_b0,puVar8 + 6);
  free(local_90);
  if (iVar7 == 0) {
    *param_1 = puVar8;
  }
  else {
    *param_1 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar11 = puVar8 + 1;
      do {
        lVar12 = *plVar11;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)*puVar8)(puVar8);
        FUN_0049e790(PTR_LAB_047cba48,puVar8);
      }
    }
  }
  return;
}


