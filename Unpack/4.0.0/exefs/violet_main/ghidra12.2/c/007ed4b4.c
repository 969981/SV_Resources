/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed4b4; name: FUN_007ed4b4
 */


void FUN_007ed4b4(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (byte *)0x0) || (param_4 < 0x10)) {
LAB_007ed508:
    local_28[0] = 0x10407;
  }
  else {
    puVar5 = (ulong *)(param_3 + 1);
    bVar1 = *param_3;
    *(byte *)(param_2 + 8) = bVar1;
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_2 + 9) = param_3[1];
      puVar5 = (ulong *)(param_3 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      uVar2 = (ushort)*puVar5 >> 8 | (ushort)*puVar5 << 8;
      *(ushort *)(param_2 + 10) = uVar2;
      if (0x5a4 < uVar2) {
        *(undefined2 *)(param_2 + 10) = 0;
        goto LAB_007ed508;
      }
      puVar5 = (ulong *)((long)puVar5 + 2);
    }
    puVar6 = puVar5;
    if ((bVar1 >> 2 & 1) != 0) {
      puVar6 = (ulong *)((long)puVar5 + 4);
      uVar3 = ((uint)*puVar5 & 0xff00ff00) >> 8 | ((uint)*puVar5 & 0xff00ff) << 8;
      *(uint *)(param_2 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
    }
    if ((bVar1 >> 3 & 1) != 0) {
      uVar4 = (*puVar6 & 0xff00ff00ff00ff00) >> 8 | (*puVar6 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x10) = uVar4 >> 0x20 | uVar4 << 0x20;
    }
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


