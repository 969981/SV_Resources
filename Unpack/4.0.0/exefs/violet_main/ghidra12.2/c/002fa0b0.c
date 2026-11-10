/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fa0b0; name: FUN_002fa0b0
 */


undefined8 FUN_002fa0b0(undefined8 param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = (ulong *)FUN_00344980();
  if ((puVar2 != (ulong *)0x0) && (uVar4 = *puVar2, uVar4 != 0)) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(puVar2[1] + 8);
    do {
      iVar1 = strcmp("grpc.security_connector",(char *)*puVar6);
      if (iVar1 == 0) {
        uVar3 = FUN_00344a70(param_1,PTR_PTR_047cca00,0,0);
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar5 < uVar4);
  }
  return 1;
}


