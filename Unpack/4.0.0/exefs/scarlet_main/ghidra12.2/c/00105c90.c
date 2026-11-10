/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00105c90; name: FUN_00105c90
 */


void FUN_00105c90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_b0 [128];
  
  uVar5 = param_4 * 2;
  puVar4 = (undefined1 *)*param_2;
  uVar3 = *(int *)(param_2 + 2) - (int)puVar4;
  uVar2 = *(uint *)(param_2 + 3);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  if (uVar1 < uVar5) {
    if (uVar2 - uVar1 < uVar5) {
      puVar4 = auStack_b0 + (0x80 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0));
    }
    else {
      puVar4 = (undefined1 *)param_2[1];
    }
  }
  FUN_00105d30(param_1,puVar4);
  FUN_00105f50(param_2,puVar4,uVar5 - param_6);
  return;
}


