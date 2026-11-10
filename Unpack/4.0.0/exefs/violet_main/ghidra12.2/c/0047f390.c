/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047f390; name: FUN_0047f390
 */


undefined8 FUN_0047f390(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar3 = uVar1 >> 3;
  uVar4 = (ulong)uVar3;
  if ((uVar1 & 7) == 0) {
    *(undefined1 *)((long)param_2 + uVar4 + 0x40) = 0x80;
    uVar4 = (ulong)(uVar3 + 1);
    if (uVar1 < 0x100) goto LAB_0047f424;
LAB_0047f3d4:
    if (uVar1 < 0x1f8) {
      memset((void *)((long)param_2 + uVar4 + 0x40),0,(ulong)(0x3f - uVar3));
    }
    FUN_0047f4c0(param_2,param_2 + 8,1);
    uVar4 = 0;
  }
  else {
    *(byte *)((long)param_2 + uVar4 + 0x40) =
         *(byte *)((long)param_2 + uVar4 + 0x40) | (byte)(0x80 >> (ulong)(uVar1 & 7));
    uVar4 = (ulong)(uVar3 + 1);
    if (0xff < uVar1) goto LAB_0047f3d4;
LAB_0047f424:
    if (0xf7 < uVar1) goto LAB_0047f444;
  }
  memset((void *)((long)param_2 + uVar4 + 0x40),0,(ulong)(0x20 - (int)uVar4));
LAB_0047f444:
  uVar4 = (param_2[0x11] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x11] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar2 = (param_2[0x12] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x12] & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  param_2[0xe] = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[0xf] = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (param_2[0x13] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x13] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar2 = (param_2[0x14] & 0xff00ff00ff00ff00) >> 8 | (param_2[0x14] & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  param_2[0xc] = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[0xd] = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_0047f4c0(param_2,param_2 + 8,1);
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  FUN_00453300(param_2,0xa8);
  return 1;
}


