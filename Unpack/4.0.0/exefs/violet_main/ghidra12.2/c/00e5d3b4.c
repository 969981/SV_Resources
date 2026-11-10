/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5d3b4; name: FUN_00e5d3b4
 */


undefined8 * FUN_00e5d3b4(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  void *__s;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_68;
  
  local_68 = 0x578;
  puVar7 = (undefined8 *)(**(code **)(*DAT_048857d8 + 0x10))(DAT_048857d8,&local_68);
  nn::os::SetTlsValue(DAT_048857a8,puVar7);
  plVar9 = DAT_048857d8;
  lVar13 = tpidr_el0;
  *(undefined8 **)(lVar13 + 0x1000b8) = puVar7;
  *puVar7 = 0;
  puVar7[1] = plVar9;
  memset(puVar7 + 2,0,0x3b8);
  *(undefined4 *)(puVar7 + 0x79) = 0;
  puVar7[3] = plVar9;
  puVar7[4] = plVar9;
  puVar7[0x7a] = puVar7 + 2;
  puVar7[5] = plVar9;
  puVar7[6] = plVar9;
  puVar7[7] = plVar9;
  puVar7[8] = plVar9;
  memset(puVar7 + 0x7d,0,0x100);
  memset(puVar7 + 0x9e,0,0x68);
  puVar7[0xab] = 0xffffffffffffffff;
  puVar7[0xac] = 0;
  puVar7[0xad] = 0;
  *(undefined1 *)(puVar7 + 0xae) = 0;
  uVar5 = fpcr;
  fpcr = uVar5 | 0x1000000;
  local_68 = 0x1d28;
  puVar8 = (undefined2 *)(**(code **)(*DAT_048857d8 + 0x10))(DAT_048857d8,&local_68);
  puVar2 = PTR_DAT_047e5b20 + 0x10;
  *puVar8 = 0;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(undefined **)(puVar8 + 4) = puVar2;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  lVar13 = -0x1d00;
  do {
    lVar3 = lVar13 + 0xe8;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d30) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d28) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d38) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d40) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d48) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d50) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d58) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d60) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d68) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d70) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d78) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d80) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d88) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d90) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1d98) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1da8) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1da0) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1db0) = 0x8000000000000000;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1dc0) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1db8) = 0;
    *(long *)((long)puVar8 + lVar13 + 0x1dc8) = (long)puVar8 + 1;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1de0) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1dd8) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1dd0) = 0;
    *(undefined2 **)((long)puVar8 + lVar13 + 0x1de8) = puVar8 + 1;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1e00) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1df8) = 0;
    *(undefined8 *)((long)puVar8 + lVar13 + 0x1df0) = 0;
    lVar13 = lVar3;
  } while (lVar3 != 0);
  puVar7[0x7b] = puVar8;
  puVar7[0x7c] = puVar7 + 0xa6;
  nn::os::LockMutex(DAT_048857c0);
  *DAT_048857d0 = *DAT_048857d0 + 1;
  if (*DAT_048857d0 == 1) {
    local_68 = 0x4218;
    __s = (void *)(**(code **)(*DAT_048857d8 + 0x10))(DAT_048857d8,&local_68);
    memset(__s,0,0x4218);
    FUN_031d07bc(__s);
    DAT_04883ee8 = __s;
  }
  nn::os::UnlockMutex(DAT_048857c0);
  nn::os::LockMutex(DAT_048857c0);
  puVar11 = DAT_048857c8;
  if (DAT_048857c8[1] == 0) {
    *DAT_048857c8 = puVar7;
    puVar11[1] = puVar7;
    puVar7[0xa5] = 0;
    puVar7[0xa4] = 0;
    puVar11 = DAT_04885800;
  }
  else {
    *(undefined8 **)(DAT_048857c8[1] + 0x528) = puVar7;
    puVar7[0xa4] = puVar11[1];
    puVar7[0xa5] = 0;
    puVar11[1] = puVar7;
    puVar11 = DAT_04885800;
  }
  for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)puVar11[1]) {
    (*(code *)*puVar11)(puVar7);
  }
  nn::os::UnlockMutex(DAT_048857c0);
  FUN_031d3c20();
  if (DAT_048857e0 != (code *)0x0) {
    (*DAT_048857e0)(puVar7,DAT_048857f0);
  }
  puVar2 = PTR_DAT_047d1a08;
  lVar13 = puVar7[0x7a];
  local_68 = 0x58;
  plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar9,"LifoAllocator");
  }
  puVar6 = PTR_DAT_047e6048;
  plVar12 = *(long **)(lVar13 + 0x10);
  plVar9[2] = (long)plVar12;
  plVar9[3] = (long)plVar12;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[5] = 0xfd00;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  local_68 = 0x10;
  plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,&local_68);
  puVar4 = PTR_DAT_047e5fe0 + 0x10;
  *plVar10 = (long)puVar4;
  plVar10[1] = (long)plVar12;
  plVar9[4] = (long)plVar10;
  local_68 = 0x28;
  puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,&local_68);
  puVar11[2] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined4 *)((long)puVar11 + 0xc) = 0x80000000;
  puVar11[3] = 0x8000000000000000;
  puVar11[4] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  plVar9[6] = (long)puVar11;
  local_68 = 0x58;
  plVar10 = (long *)(**(code **)puVar2)(0,&local_68,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar10,"LifoAllocator");
  }
  plVar14 = *(long **)(lVar13 + 0x28);
  plVar10[5] = 0xfd00;
  *plVar10 = (long)(puVar6 + 0x10);
  plVar10[1] = 0;
  plVar10[2] = (long)plVar14;
  plVar10[3] = (long)plVar14;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  local_68 = 0x10;
  plVar12 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,&local_68);
  *plVar12 = (long)puVar4;
  plVar12[1] = (long)plVar14;
  plVar10[4] = (long)plVar12;
  local_68 = 0x28;
  puVar11 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,&local_68);
  puVar11[3] = 0x8000000000000000;
  puVar11[4] = 0;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined4 *)((long)puVar11 + 0xc) = 0x80000000;
  plVar10[6] = (long)puVar11;
  uVar1 = *(int *)(puVar7 + 0x79) + 1;
  *(uint *)(puVar7 + 0x79) = uVar1;
  if (uVar1 < 0x10) {
    lVar13 = puVar7[0x7a];
    plVar12 = puVar7 + (ulong)uVar1 * 7 + 2;
    *plVar12 = lVar13;
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[6] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[1] = *(long *)(lVar13 + 8);
    plVar12[2] = *(long *)(lVar13 + 0x10);
    plVar12[3] = *(long *)(lVar13 + 0x18);
    plVar12[4] = *(long *)(lVar13 + 0x20);
    plVar12[5] = *(long *)(lVar13 + 0x28);
    plVar12[6] = *(long *)(lVar13 + 0x30);
    puVar11 = puVar7 + (long)*(int *)(puVar7 + 0x79) * 7 + 2;
    puVar7[0x7a] = puVar11;
  }
  else {
    puVar11 = (undefined8 *)puVar7[0x7a];
  }
  puVar11[2] = plVar9;
  puVar11[5] = plVar10;
  return puVar7;
}


