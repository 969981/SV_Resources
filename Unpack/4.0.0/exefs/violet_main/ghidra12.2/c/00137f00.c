/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00137f00; name: FUN_00137f00
 */


ulong FUN_00137f00(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long local_70;
  undefined1 local_68;
  
  lVar8 = *param_1;
  uVar7 = *(undefined8 *)(param_1[2] + 0x38);
  puVar4 = (ulong *)FUN_0013d560(*(undefined8 *)(param_1[2] + 0x50));
  if ((char)puVar4[1] == '\x03') {
    uVar9 = *puVar4;
    if ((((int)uVar9 < *(int *)((long)param_1 + 0x2c)) &&
        (((*(byte *)(param_3 + 1) ^
          *(byte *)(*(long *)(lVar8 + 0x38) + ((long)(uVar9 << 0x20) >> 0x1c) + 8)) & 0x3f) == 0))
       && (iVar3 = FUN_00140890(0,*(long *)(lVar8 + 0x38) + (long)(int)uVar9 * 0x10,param_3),
          iVar3 != 0)) goto LAB_00138074;
  }
  piVar10 = (int *)(lVar8 + 0x14);
  iVar3 = *piVar10;
  lVar11 = (long)iVar3;
  uVar2 = *(uint *)((long)param_1 + 0x2c);
  uVar9 = (ulong)uVar2;
  local_68 = 3;
  local_70 = (long)(int)uVar2;
  FUN_0013d7c0(uVar7,*(undefined8 *)(param_1[2] + 0x50),param_2,puVar4,&local_70);
  lVar5 = FUN_0012d3b0(uVar7,*(undefined8 *)(lVar8 + 0x38),uVar2,piVar10,0x10,0x1ffffff,"constants")
  ;
  *(long *)(lVar8 + 0x38) = lVar5;
  if (iVar3 < *piVar10) {
    uVar6 = lVar11 << 4 | 8;
    do {
      *(undefined1 *)(lVar5 + uVar6) = 0;
      lVar5 = *(long *)(lVar8 + 0x38);
      lVar11 = lVar11 + 1;
      uVar6 = uVar6 + 0x10;
    } while (lVar11 < *(int *)(lVar8 + 0x14));
  }
  plVar1 = (long *)(lVar5 + (long)(int)uVar2 * 0x10);
  *plVar1 = *param_3;
  *(char *)(plVar1 + 1) = (char)param_3[1];
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  if (((*(byte *)(param_3 + 1) >> 6 & 1) != 0) && ((*(byte *)(lVar8 + 9) >> 5 & 1) != 0)) {
    if ((*(byte *)(*param_3 + 9) & 0x18) != 0) {
      FUN_00129d70(uVar7,lVar8);
    }
  }
LAB_00138074:
  return uVar9 & 0xffffffff;
}


