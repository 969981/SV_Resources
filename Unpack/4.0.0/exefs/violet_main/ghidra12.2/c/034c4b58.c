/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c4b58; name: FUN_034c4b58
 */


void FUN_034c4b58(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  
  puVar2 = PTR_DAT_047e2fd0;
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(lVar7 + 0x38);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x48);
    if (plVar6 == (long *)0x0) goto LAB_034c4bc0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[2] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *plVar6 = (long)(PTR_DAT_047e6e88 + 0x10);
    plVar6[1] = 0;
    puVar3 = PTR_DAT_047e6e58;
    lVar5 = *(long *)(PTR_DAT_047e6e58 + 8);
    plVar6[2] = 0;
    plVar6[3] = lVar5;
    plVar1 = (long *)(puVar3 + 0x10);
    if (*(long *)(puVar3 + 0x10) != 0) {
      plVar1 = (long *)(lVar5 + 0x10);
    }
    *plVar1 = (long)plVar6;
    *(long **)(puVar3 + 8) = plVar6;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    puVar3 = PTR_DAT_047e6e60;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[8] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    *(long **)(lVar7 + 0x38) = plVar6;
    plVar6[1] = lVar7;
    iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(lVar7 + 0x78));
    if (iVar4 != 1) {
      (**(code **)*plVar6)(plVar6);
      (**(code **)(puVar2 + 0x30))(4,plVar6);
      *(undefined8 *)(lVar7 + 0x38) = 0;
      goto LAB_034c4bc0;
    }
  }
  uStack_78 = 0x7f7fffffffffffff;
  local_40 = 0;
  local_3c = 0x7f7fffff;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined4 *)(plVar6 + 5) = 0;
  *(undefined4 *)(plVar6 + 7) = 0;
  local_80 = plVar6;
  if ((code *)plVar6[8] != (code *)0x0) {
    (*(code *)plVar6[8])(plVar6[1],&local_80);
  }
  FUN_034eaf24(&local_80);
LAB_034c4bc0:
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe;
  return;
}


