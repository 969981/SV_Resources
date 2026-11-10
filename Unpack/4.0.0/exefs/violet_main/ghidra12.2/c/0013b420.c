/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b420; name: FUN_0013b420
 */


undefined8 * FUN_0013b420(code *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  time_t tVar4;
  undefined8 *puVar5;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined4 *puStack_40;
  undefined *local_38;
  
  puVar3 = (undefined8 *)(*param_1)(param_2,0,8,0x658);
  puVar5 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3 + 1;
    *puVar5 = 0;
    *(undefined2 *)(puVar3 + 2) = 0x808;
    *(undefined1 *)((long)puVar3 + 0x134) = 8;
    puVar3[0x1a] = param_1;
    puVar3[4] = puVar3 + 0x1a;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = puVar5;
    puVar3[0xc] = 0;
    puVar3[0x15] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    *(undefined4 *)((long)puVar3 + 0x12) = 0x100;
    *(undefined4 *)((long)puVar3 + 0xc4) = 0;
    puVar3[0x16] = 0;
    *(undefined8 *)((long)puVar3 + 0xbc) = 0;
    puVar3[0x28] = puVar5;
    *(undefined4 *)(puVar3 + 0x17) = 0x10000;
    puVar3[0x1b] = param_2;
    puVar3[0xca] = 0;
    puVar3[0xc9] = 0;
    puVar3[0x3b] = puVar5;
    tVar4 = time((time_t *)0x0);
    puStack_40 = &local_4c;
    local_4c = (undefined4)tVar4;
    local_38 = PTR_FUN_047cb858;
    local_48 = puVar5;
    uVar1 = FUN_0013b8d0(&local_48,0x18);
    *(undefined2 *)((long)puVar3 + 0x13a) = 0;
    *(undefined4 *)(puVar3 + 0x26) = uVar1;
    *(undefined1 *)(puVar3 + 0x23) = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    *(undefined2 *)((long)puVar3 + 0x135) = 8;
    *(undefined1 *)((long)puVar3 + 0x137) = 0;
    puVar3[0x1f] = 0;
    puVar3[0x24] = 0;
    puVar3[0x56] = 0;
    puVar3[0x57] = 0;
    puVar3[0x58] = 0;
    puVar3[0x59] = 0;
    puVar3[0x5a] = 0;
    puVar3[0x5b] = 0;
    puVar3[0x5c] = 0;
    puVar3[0x5d] = 0;
    puVar3[0x5e] = 0;
    puVar3[0x1c] = 0x658;
    puVar3[0x1d] = 0;
    *(undefined1 *)(puVar3 + 0x25) = 3;
    *(undefined2 *)((long)puVar3 + 0x13c) = 0x1932;
    *(undefined1 *)((long)puVar3 + 0x13e) = 0xd;
    *(undefined2 *)(puVar3 + 0x27) = 0x1914;
    puVar3[0x29] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    iVar2 = FUN_00126c60(puVar5,&LAB_0013b5c0,0);
    if (iVar2 != 0) {
      FUN_0013b670(puVar5);
      puVar5 = (undefined8 *)0x0;
    }
  }
  return puVar5;
}


