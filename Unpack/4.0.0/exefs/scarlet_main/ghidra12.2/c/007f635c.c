/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f635c; name: FUN_007f635c
 */


void FUN_007f635c(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((param_3 != (undefined1 *)0x0) && (0x59f < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    *(undefined1 *)(param_2 + 10) = param_3[2];
    uVar2 = (*(uint *)(param_3 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 3) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar1 = ((ulong)*(uint *)(param_3 + 7) << 0x20 & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)*(uint *)(param_3 + 7) << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | uVar1 << 0x10;
    uVar2 = (uint)(uVar1 >> 0x20);
    *(uint *)(param_2 + 0x10) = uVar2;
    if ((uVar2 < 0x596) &&
       (memcpy((void *)(param_2 + 0x14),param_3 + 0xb,uVar1 >> 0x20),
       *(int *)(param_2 + 0x10) + 0xb ==
       ((int)(param_3 + 0xb) + *(int *)(param_2 + 0x10)) - (int)param_3)) {
      local_40[0] = 0;
      goto LAB_007f63fc;
    }
  }
  local_40[0] = 0x10407;
LAB_007f63fc:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


