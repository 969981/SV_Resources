/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8fdc; name: FUN_031d8fdc
 */


undefined8 FUN_031d8fdc(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_28;
  
  plVar1 = (long *)(param_1 + 0x1d0);
  if ((param_2 >> 4 & 1) == 0) {
    iVar6 = *(int *)(param_1 + 0x1f8);
    *(int *)(param_1 + 0x1f8) = iVar6 + 1;
    iVar2 = *(int *)(param_1 + 0x1d8);
    lVar8 = (long)iVar2 + 1;
    uVar3 = iVar2 - iVar6;
    if ((int)(*(uint *)(param_1 + 0x1dc) & 0x7fffffff) <= iVar2) {
      FUN_031d97a4(plVar1,lVar8);
    }
    puVar7 = (undefined8 *)(*plVar1 + (long)iVar6 * 8);
    if (uVar3 != 0) {
      FUN_031d0240(puVar7 + 1,puVar7,
                   -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1d8);
    lVar8 = (long)iVar6 + 1;
    if ((int)(*(uint *)(param_1 + 0x1dc) & 0x7fffffff) <= iVar6) {
      FUN_031d97a4(plVar1,lVar8);
      iVar6 = *(int *)(param_1 + 0x1d8);
    }
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x1d0) + (long)iVar6 * 8);
  }
  *(int *)(param_1 + 0x1d8) = (int)lVar8;
  local_28 = 0x220;
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)(param_1 + 8) + 0x10))((long *)(param_1 + 8),0x220,&local_28);
  *puVar7 = puVar5;
  puVar4 = PTR_DAT_047e5b60;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *puVar5 = &PTR_FUN_046a57e0;
  puVar5[1] = puVar4 + 0x10;
  puVar4 = PTR_PTR_047d1a50;
  *(undefined4 *)(puVar5 + 0x3f) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[0x40] = 0;
  puVar5[2] = puVar4 + 0x20;
  puVar5[3] = 0x4000;
  puVar5[0x41] = 0x8000000000000000;
  puVar5[0x31] = 0x8000000000000000;
  puVar5[0x32] = puVar5 + 0x34;
  puVar5[7] = 0x8000000000000000;
  puVar5[8] = 0;
  puVar5[9] = 0x8000000000000000;
  puVar5[0x33] = 0x8000000200000000;
  *(undefined4 *)(puVar5 + 10) = 0;
  puVar5[0x42] = 0;
  *(undefined1 *)((long)puVar5 + 0x21a) = 0;
  puVar5[0x2f] = 0x8000000000000000;
  puVar5[0x30] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0x8000000000000000;
  *(undefined2 *)(puVar5 + 0x43) = 1;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x3a] = puVar5 + 0x3c;
  puVar5[0x3b] = 0x8000000300000000;
  memset(puVar5 + 0xd,0,0x100);
  return *puVar7;
}


