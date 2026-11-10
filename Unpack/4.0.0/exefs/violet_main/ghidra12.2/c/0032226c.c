/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032226c; name: FUN_0032226c
 */


void FUN_0032226c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_38 [8];
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    FUN_003504e0(param_2,"no closures to schedule");
    return;
  }
  if (3 < uVar1) {
    lVar3 = 0;
    uVar4 = 1;
    do {
      puVar2 = param_1 + 1;
      if ((uVar1 & 1) != 0) {
        puVar2 = (ulong *)param_1[1];
      }
      FUN_003504a8(param_2,*(undefined8 *)((long)puVar2 + lVar3 + 0x18),
                   *(undefined8 *)((long)puVar2 + lVar3 + 0x20),
                   *(undefined8 *)((long)puVar2 + lVar3 + 0x28));
      uVar1 = *param_1;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < uVar1 >> 1);
  }
  if ((uVar1 & 1) == 0) {
    puVar2 = param_1 + 1;
  }
  else {
    puVar2 = (ulong *)param_1[1];
  }
  FUN_0035351c(auStack_38,*puVar2,puVar2[1]);
  if ((*param_1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  }
  *param_1 = 0;
  return;
}


