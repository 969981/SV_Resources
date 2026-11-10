/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00288c18; name: FUN_00288c18
 */


undefined8 * FUN_00288c18(long *param_1,byte *param_2)

{
  size_t __n;
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_58;
  long *plStack_50;
  undefined1 local_48;
  
  plVar7 = param_1 + 1;
  puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
  local_48 = 0;
  local_58 = puVar5;
  plStack_50 = plVar7;
  if ((*param_2 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)param_2;
    puVar5[6] = *(undefined8 *)(param_2 + 0x10);
    puVar5[5] = uVar12;
    puVar5[4] = uVar11;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    pvVar2 = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      pvVar8 = (void *)((long)puVar5 + 0x21);
      *(char *)(puVar5 + 4) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00288de0 to 00288de7 has its CatchHandler @ 00288de8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar10 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
      puVar5[5] = uVar1;
      puVar5[6] = pvVar8;
      puVar5[4] = uVar10 | 1;
    }
    memcpy(pvVar8,pvVar2,uVar1 + 1);
  }
                    /* try { // try from 00288cd0 to 00288cd3 has its CatchHandler @ 00288df0 */
  FUN_002886bc(puVar5 + 7,param_2 + 0x18);
  local_48 = 1;
  plVar7 = param_1 + 1;
  plVar9 = (long *)*plVar7;
  if (plVar9 != (long *)0x0) {
    uVar1 = (ulong)(*(byte *)(puVar5 + 4) >> 1);
    pvVar2 = (void *)((long)puVar5 + 0x21);
    if ((*(byte *)(puVar5 + 4) & 1) != 0) {
      uVar1 = puVar5[5];
      pvVar2 = (void *)puVar5[6];
    }
    do {
      bVar3 = *(byte *)(plVar9 + 4);
      uVar10 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar10 = plVar9[5];
      }
      __n = uVar10;
      if (uVar1 <= uVar10) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00288d58:
        if (uVar1 < uVar10) goto LAB_00288d60;
LAB_00288d08:
        plVar7 = (long *)plVar9[1];
        if (plVar7 == (long *)0x0) {
          plVar7 = plVar9 + 1;
          goto LAB_00288d7c;
        }
      }
      else {
        pvVar8 = (void *)plVar9[6];
        if ((bVar3 & 1) == 0) {
          pvVar8 = (void *)((long)plVar9 + 0x21);
        }
        iVar4 = memcmp(pvVar2,pvVar8,__n);
        if (iVar4 == 0) goto LAB_00288d58;
        if (-1 < iVar4) goto LAB_00288d08;
LAB_00288d60:
        plVar7 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) goto code_r0x00288d68;
      }
      plVar9 = plVar7;
    } while( true );
  }
  plVar9 = plVar7;
LAB_00288d7c:
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = plVar9;
  *plVar7 = (long)puVar5;
  if (*(long *)*param_1 == 0) {
    puVar6 = puVar5;
  }
  else {
    *param_1 = *(long *)*param_1;
    puVar6 = (undefined8 *)*plVar7;
  }
  FUN_010108e0(param_1[1],puVar6);
  param_1[2] = param_1[2] + 1;
  local_58 = (undefined8 *)0x0;
  FUN_00288504(&local_58);
  return puVar5;
code_r0x00288d68:
  plVar7 = plVar9;
  goto LAB_00288d7c;
}


