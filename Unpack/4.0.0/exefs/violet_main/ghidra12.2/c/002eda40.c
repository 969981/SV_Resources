/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eda40; name: FUN_002eda40
 */


long FUN_002eda40(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(param_1[1] + 8);
    do {
      iVar1 = strcmp((char *)*puVar4,"grpc.server_credentials");
      if (((iVar1 == 0) && (*(int *)(puVar4 + -1) == 2)) && (puVar4[1] != 0)) {
        return puVar4[1];
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar3 < uVar2);
  }
  return 0;
}


