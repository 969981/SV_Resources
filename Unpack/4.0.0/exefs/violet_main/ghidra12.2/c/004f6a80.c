/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f6a80; name: FUN_004f6a80
 */


undefined8 * FUN_004f6a80(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
  plVar1 = (long *)(param_2 + (uVar3 & 0xffffffff));
  piVar5 = (int *)plVar1[2];
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)((long)plVar1 + 0xc);
LAB_004f6ae4:
    FUN_00532334(plVar1,iVar6 + 1);
    piVar5 = (int *)plVar1[2];
    iVar6 = *piVar5;
  }
  else {
    iVar2 = (int)plVar1[1];
    iVar6 = *piVar5;
    if (iVar2 < iVar6) {
      *(int *)(plVar1 + 1) = iVar2 + 1;
      return *(undefined8 **)(piVar5 + (long)iVar2 * 2 + 2);
    }
    if (iVar6 == *(int *)((long)plVar1 + 0xc)) goto LAB_004f6ae4;
  }
  *piVar5 = iVar6 + 1;
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar4 == (undefined8 *)0x0) goto LAB_004f6b44;
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_00520d08(lVar7,0,0x18);
    }
    puVar4 = (undefined8 *)FUN_00520544(lVar7,0x18,PTR_LAB_047cba90);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
LAB_004f6b44:
  lVar7 = plVar1[1];
  *(int *)(plVar1 + 1) = (int)lVar7 + 1;
  *(undefined8 **)(plVar1[2] + (long)(int)lVar7 * 8 + 8) = puVar4;
  return puVar4;
}


