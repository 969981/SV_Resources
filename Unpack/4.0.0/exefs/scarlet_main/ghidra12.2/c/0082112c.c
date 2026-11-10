/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082112c; name: FUN_0082112c
 */


undefined8 FUN_0082112c(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_1 != -1) {
    return 0x72;
  }
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x52) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4a) = 0xffffffffffffffff;
  puVar2 = (undefined8 *)((long)param_1 + 10);
  *(undefined8 *)((long)param_1 + 0x12) = 0xffffffffffffffff;
  *puVar2 = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4b) = 0x706050403020100;
  *(undefined4 *)((long)param_1 + 0x53) = 0xb0a0908;
  *(undefined2 *)((long)param_1 + 0x57) = 0xd0c;
  *(undefined1 *)((long)param_1 + 0x59) = 0xe;
  *(undefined8 *)((long)param_1 + 0x62) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5a) = 0xffffffffffffffff;
  uVar1 = param_2 - 1;
  *(undefined8 *)((long)param_1 + 0x5a) = 0x161514131211100f;
  *(undefined2 *)((long)param_1 + 0x62) = 0x1817;
  *(undefined1 *)(param_1 + 0x19) = 0x19;
  *(undefined8 *)((long)param_1 + 0x72) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6b) = 0x21201f1e1d1c1b1a;
  *(undefined4 *)((long)param_1 + 0x73) = 0x25242322;
  *(undefined2 *)((long)param_1 + 0x77) = 0x2726;
  *(undefined1 *)((long)param_1 + 0x79) = 0x28;
  *(undefined8 *)((long)param_1 + 0x82) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7a) = 0x302f2e2d2c2b2a29;
  *(undefined2 *)((long)param_1 + 0x82) = 0x3231;
  *(undefined1 *)(param_1 + 0x21) = 0x33;
  *(undefined8 *)((long)param_1 + 0x42) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3a) = 0x3b3a393837363534;
  *(undefined2 *)((long)param_1 + 0x42) = 0x3d3c;
  uVar3 = (uint)(0x212e5f5f2e2d2b >> ((ulong)uVar1 << 3 & 0x3f));
  if (6 < uVar1) {
    uVar3 = 0x2b;
  }
  uVar4 = (uint)(0x2d5f2d3a2d5f2d >> ((ulong)uVar1 << 3 & 0x3f));
  if (6 < uVar1) {
    uVar4 = 0x2f;
  }
  *(undefined1 *)((long)param_1 + 0x47) = 0xfe;
  *(undefined1 *)((long)param_1 + 0x17) = 0xfe;
  *(undefined1 *)(param_1 + 5) = 0xfe;
  *(undefined8 *)((long)param_1 + 0x22) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x32) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x2a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x92) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xa2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x9a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xaa) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xba) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xca) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xe2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xda) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xf2) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xea) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x102) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xfa) = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar2 + ((ulong)uVar3 & 0xff)) = 0x3e;
  *(undefined1 *)((long)puVar2 + ((ulong)uVar4 & 0xff)) = 0x3f;
  *(char *)(param_1 + 2) = (char)uVar3;
  *(char *)((long)param_1 + 9) = (char)uVar4;
  return 0;
}


