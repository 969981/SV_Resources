/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5cbdc; name: FUN_00e5cbdc
 */


void FUN_00e5cbdc(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x110;
  puVar4 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(puVar4,"hknpTriangleShape");
  }
  lVar5 = *(long *)PTR_DAT_047e34d8;
  uVar1 = *(undefined4 *)(lVar5 + 0x8a8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8ac);
  *puVar4 = *(undefined8 *)(lVar5 + 0x8a0);
  *(undefined4 *)(puVar4 + 1) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x8b8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8bc);
  puVar4[2] = *(undefined8 *)(lVar5 + 0x8b0);
  *(undefined4 *)(puVar4 + 3) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x8c8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8cc);
  puVar4[4] = *(undefined8 *)(lVar5 + 0x8c0);
  *(undefined4 *)(puVar4 + 5) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x2c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x8d8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8dc);
  puVar4[6] = *(undefined8 *)(lVar5 + 0x8d0);
  *(undefined4 *)(puVar4 + 7) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x3c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x8e8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8ec);
  puVar4[8] = *(undefined8 *)(lVar5 + 0x8e0);
  *(undefined4 *)(puVar4 + 9) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x4c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x8f8);
  uVar2 = *(undefined4 *)(lVar5 + 0x8fc);
  puVar4[10] = *(undefined8 *)(lVar5 + 0x8f0);
  *(undefined4 *)(puVar4 + 0xb) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x5c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x908);
  uVar2 = *(undefined4 *)(lVar5 + 0x90c);
  puVar4[0xc] = *(undefined8 *)(lVar5 + 0x900);
  *(undefined4 *)(puVar4 + 0xd) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x6c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x918);
  uVar2 = *(undefined4 *)(lVar5 + 0x91c);
  puVar4[0xe] = *(undefined8 *)(lVar5 + 0x910);
  *(undefined4 *)(puVar4 + 0xf) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x7c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x928);
  uVar2 = *(undefined4 *)(lVar5 + 0x92c);
  puVar4[0x10] = *(undefined8 *)(lVar5 + 0x920);
  *(undefined4 *)(puVar4 + 0x11) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x8c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x938);
  uVar2 = *(undefined4 *)(lVar5 + 0x93c);
  puVar4[0x12] = *(undefined8 *)(lVar5 + 0x930);
  *(undefined4 *)(puVar4 + 0x13) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x9c) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x948);
  uVar2 = *(undefined4 *)(lVar5 + 0x94c);
  puVar4[0x14] = *(undefined8 *)(lVar5 + 0x940);
  *(undefined4 *)(puVar4 + 0x15) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xac) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x958);
  uVar2 = *(undefined4 *)(lVar5 + 0x95c);
  puVar4[0x16] = *(undefined8 *)(lVar5 + 0x950);
  *(undefined4 *)(puVar4 + 0x17) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xbc) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x968);
  uVar2 = *(undefined4 *)(lVar5 + 0x96c);
  puVar4[0x18] = *(undefined8 *)(lVar5 + 0x960);
  *(undefined4 *)(puVar4 + 0x19) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xcc) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x978);
  uVar2 = *(undefined4 *)(lVar5 + 0x97c);
  puVar4[0x1a] = *(undefined8 *)(lVar5 + 0x970);
  *(undefined4 *)(puVar4 + 0x1b) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xdc) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x988);
  uVar2 = *(undefined4 *)(lVar5 + 0x98c);
  puVar4[0x1c] = *(undefined8 *)(lVar5 + 0x980);
  *(undefined4 *)(puVar4 + 0x1d) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xec) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x998);
  uVar2 = *(undefined4 *)(lVar5 + 0x99c);
  puVar4[0x1e] = *(undefined8 *)(lVar5 + 0x990);
  *(undefined4 *)(puVar4 + 0x1f) = uVar1;
  *(undefined4 *)((long)puVar4 + 0xfc) = uVar2;
  uVar1 = *(undefined4 *)(lVar5 + 0x9a8);
  uVar2 = *(undefined4 *)(lVar5 + 0x9ac);
  puVar4[0x20] = *(undefined8 *)(lVar5 + 0x9a0);
  *(undefined4 *)(puVar4 + 0x21) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x10c) = uVar2;
  *(undefined4 *)(puVar4 + 4) = param_2;
  *param_1 = (long)puVar4;
  return;
}


