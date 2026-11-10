/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307d2b8; name: FUN_0307d2b8
 */


void FUN_0307d2b8(long param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x21;
  undefined8 *puVar6;
  undefined8 *local_50;
  undefined8 local_48;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  local_50 = (undefined8 *)0x0;
  local_48 = -0x8000000000000000;
  FUN_030661a4(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(*(long *)(lVar5 + 0x20) + 0x180),
               &local_50);
  if ((int)local_48 != 0) {
    puVar1 = local_50 + (long)(int)local_48 * 4;
    puVar6 = local_50;
    do {
      unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(puVar6 + 1);
      uVar2 = FUN_0308fd04(lVar5,*puVar6,unaff_x21);
      FUN_0307683c(*(undefined4 *)(puVar6 + 3),uVar2,lVar5);
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar1);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x68) + 200);
  if (lVar3 != 0) {
    FUN_03081290(lVar3,*(undefined8 *)(param_1 + 0x58),lVar5);
  }
  lVar5 = local_48;
  uVar4 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_50 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar4 << 5);
  }
  return;
}


