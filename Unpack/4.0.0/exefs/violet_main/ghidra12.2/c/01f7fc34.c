/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7fc34; name: FUN_01f7fc34
 */


void FUN_01f7fc34(long *param_1,uint param_2,ulong param_3,uint param_4)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)param_2;
  if ((param_4 & 1) != 0) {
    param_3 = (**(code **)(*param_1 + 0x80))(param_1);
    param_3 = param_3 & 0xffffffff;
  }
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_1[8],param_3);
  if (param_2 < *(uint *)(param_1 + 0xb)) {
    lVar6 = uVar5 * 2 + (ulong)param_2;
    lVar3 = param_1[8];
    *(ulong *)(param_1[0xc] + lVar6 * 8 + 8) = uVar2 & 0xffff | 0x20000;
    lVar4 = param_1[0xc];
    lVar6 = *(long *)(lVar4 + lVar6 * 8);
    if (*(char *)(lVar6 + 0x54) != '\0') {
      uVar1 = FUN_011b8d00(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar3 + 0x30),
                           *(undefined2 *)(lVar6 + 0x50));
      *(undefined2 *)(lVar6 + 0x52) = uVar1;
      lVar4 = param_1[0xc];
    }
    *(undefined2 *)(lVar4 + uVar5 * 0x18 + 0x10) = 0;
    lVar6 = param_1[0xc] + uVar5 * 0x18;
    *(ushort *)(lVar6 + 0x12) = *(ushort *)(lVar6 + 0x12) & 0xfffe;
  }
  return;
}


