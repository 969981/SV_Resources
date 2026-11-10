/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fed500; name: FUN_02fed500
 */


void FUN_02fed500(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  lVar6 = *(long *)(param_1 + 0x8b8);
  local_b0 = auStack_a0;
  local_a8 = 0x8000001000000000;
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = param_2;
  do {
    uVar4 = (ulong)(uVar1 & 0xffffff);
    lVar5 = lVar3 + uVar4 * 0xc0;
    FUN_02f213d0(lVar5,param_3,lVar6 + (ulong)*(byte *)(lVar5 + 0x89) * 0x50 + 0x20,param_1 + 0x530,
                 param_1 + 0x4e0,0,param_4);
    if ((*(byte *)(lVar5 + 0x88) >> 2 & 1) != 0) {
      lVar5 = (long)(int)local_a8;
      if ((int)(local_a8._4_4_ & 0x7fffffff) <= (int)local_a8) {
        FUN_02f23d90(&local_b0,PTR_PTR_047d1a50,lVar5 + 1);
      }
      *(undefined4 *)(local_b0 + (long)(int)local_a8 * 4) =
           *(undefined4 *)(lVar3 + uVar4 * 0xc0 + 0x50);
      local_a8 = CONCAT44(local_a8._4_4_,(int)(lVar5 + 1));
    }
    lVar3 = *(long *)(param_1 + 0x38);
    uVar1 = *(uint *)(lVar3 + uVar4 * 0xc0 + 0x84);
  } while (uVar1 != param_2);
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
            (*(long **)(param_1 + 0x4c0),local_b0,local_a8 & 0xffffffff,4);
  uVar4 = local_a8;
  uVar2 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar2 << 2);
  }
  return;
}


