/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c4fdc; name: FUN_015c4fdc
 */


void FUN_015c4fdc(long param_1)

{
  undefined1 auStack_948 [2328];
  
  *(undefined1 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_015c511c(param_1 + 0xd8);
  FUN_015c511c(param_1 + 0xe3);
  FUN_015c511c(param_1 + 0xee);
  FUN_015c511c(param_1 + 0xf9);
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  FUN_015c5128(param_1 + 0x134);
  FUN_015c5128(param_1 + 0x144);
  FUN_015c5128(param_1 + 0x154);
  FUN_015c5128(param_1 + 0x164);
  FUN_015c52ec(auStack_948);
  memcpy((void *)(param_1 + 0x178),auStack_948,0x912);
  *(undefined1 *)(param_1 + 0xa90) = 1;
  if (*(char *)(param_1 + 0xab0) != '\0') {
    *(undefined1 *)(param_1 + 0xab0) = 0;
  }
  if (*(char *)(param_1 + 0xacc) != '\0') {
    *(undefined1 *)(param_1 + 0xacc) = 0;
  }
  memset((void *)(param_1 + 0xacd),0,0x48);
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined1 *)(param_1 + 0xb18) = 0xff;
  *(undefined1 *)(param_1 + 0xb28) = 0;
  *(undefined1 *)(param_1 + 0xb30) = 0xff;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  *(undefined1 *)(param_1 + 0xb40) = 0;
  *(undefined1 *)(param_1 + 0xb48) = 0xff;
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined1 *)(param_1 + 0xb58) = 0;
  *(undefined1 *)(param_1 + 0xb60) = 0xff;
  *(undefined8 *)(param_1 + 0xb68) = 0;
  *(undefined1 *)(param_1 + 0xb70) = 0;
  FUN_015c5144(param_1 + 0xb78);
  *(undefined1 *)(param_1 + 0xbe8) = 0;
  return;
}


