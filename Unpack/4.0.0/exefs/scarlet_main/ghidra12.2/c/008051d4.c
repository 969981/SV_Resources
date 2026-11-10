/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008051d4; name: FUN_008051d4
 */


void FUN_008051d4(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 != (byte *)0x0) {
    bVar2 = param_3[0x11];
    bVar3 = param_3[0x12];
    if ((uint)bVar2 + (uint)bVar3 + 0x1e <= param_4) {
      *(uint *)(param_2 + 8) = (uint)*param_3;
      uVar4 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x10) = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (*(ulong *)(param_3 + 9) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_3 + 9) & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_3 = param_3 + 0x13;
      *(ulong *)(param_2 + 0x18) = uVar4 >> 0x20 | uVar4 << 0x20;
      FUN_0078b014(local_48,param_2 + 0x20,param_3,(uint)bVar2);
      FUN_0078b014(local_48,param_2 + 0x40,param_3 + bVar2,(uint)bVar3);
      puVar1 = (ulong *)(param_3 + bVar2 + bVar3);
      uVar4 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + 0x60) = uVar4 >> 0x20 | uVar4 << 0x20;
      *(byte *)(param_2 + 0x68) = (byte)puVar1[1];
      *(byte *)(param_2 + 0x69) = *(byte *)((long)puVar1 + 9);
      memcpy((void *)(param_2 + 0x6a),(byte *)((long)puVar1 + 10),1);
      local_48[0] = 0;
      goto LAB_008052ac;
    }
  }
  local_48[0] = 0x10407;
LAB_008052ac:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


