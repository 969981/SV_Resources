/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed6f4; name: FUN_007ed6f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007ed6f4(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) || (param_5 < 0x10)) {
    local_28[0] = 0x10407;
  }
  else {
    puVar4 = (ulong *)(param_3 + 1);
    *param_3 = *(undefined1 *)(param_2 + 8);
    bVar1 = *(byte *)(param_2 + 8);
    if ((bVar1 & 1) != 0) {
      param_3[1] = *(undefined1 *)(param_2 + 9);
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)(param_3 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      *(ushort *)puVar4 = *(ushort *)(param_2 + 10) >> 8 | *(ushort *)(param_2 + 10) << 8;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      uVar2 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
      *(uint *)puVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
      bVar1 = *(byte *)(param_2 + 8);
      puVar4 = (ulong *)((long)puVar4 + 4);
    }
    puVar5 = puVar4;
    if ((bVar1 >> 3 & 1) != 0) {
      uVar3 = (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
    }
    *param_4 = (int)puVar5 - (int)param_3;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


