/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8c058; name: FUN_01f8c058
 */


void FUN_01f8c058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_00da75d8();
  lVar4 = FUN_00e06b88(param_1);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0xf8);
    *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x120);
    uVar1 = *(undefined8 *)(lVar3 + 0xe0);
    uVar2 = *(undefined8 *)(lVar3 + 0xe8);
    *(undefined8 *)(lVar3 + 0x4c0) = uVar1;
    *(undefined8 *)(lVar3 + 0x4c8) = uVar2;
    *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x128);
    *(undefined8 *)(param_1 + 0x200) = uVar1;
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    *(undefined8 *)(param_1 + 0x210) = uVar1;
    *(undefined8 *)(param_1 + 0x218) = uVar2;
    *(undefined8 *)(lVar3 + 0x4d0) = uVar1;
    *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x500);
    *(undefined8 *)(lVar3 + 0x518) = *(undefined8 *)(lVar3 + 0x508);
    *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x4e0);
    *(undefined8 *)(lVar3 + 0x4d8) = uVar2;
    *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x4e8);
  }
  return;
}


