/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4980; name: FUN_001e4980
 */


undefined8 FUN_001e4980(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  puVar2 = PTR_stdout_047cb860;
  *(undefined8 *)(param_1 + 0x778) = 0;
  puVar1 = PTR_stdin_047cb840;
  *(undefined8 *)(param_1 + 0x780) = 0;
  puVar3 = PTR_stderr_047cb8b8;
  *(undefined8 *)(param_1 + 0x788) = 0;
  puVar5 = PTR_FUN_047cb998;
  *(undefined8 *)(param_1 + 0x790) = 0;
  puVar4 = PTR_FUN_047cb988;
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)puVar1;
  uVar6 = *(undefined8 *)puVar3;
  *(undefined **)(param_1 + 0x708) = puVar5;
  *(undefined **)(param_1 + 0x720) = puVar4;
  *(undefined8 *)(param_1 + 0x7d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x6f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x6d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc08) = 0x3c;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x668) = uVar6;
  *(undefined4 *)(param_1 + 0xa38) = 1;
  *(undefined4 *)(param_1 + 0xe90) = 1;
  *(undefined4 *)(param_1 + 0xc40) = 1;
  *(undefined8 *)(param_1 + 0x6b0) = 1;
  *(undefined8 *)(param_1 + 0x6b8) = 1;
  *(undefined2 *)(param_1 + 0x6c0) = 1;
  *(undefined8 *)(param_1 + 0xbf8) = 5;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 5;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xfffffffe3fff7ffc | 0xc0008000;
  *(undefined1 *)(param_1 + 0xa90) = 0;
  FUN_001cb820(param_1 + 0x820,param_1);
  *(undefined8 *)(param_1 + 0xc78) = 0xffffffffffffffff;
  *(byte *)(param_1 + 0xac1) = *(byte *)(param_1 + 0xac1) | 0xb;
  memcpy((void *)(param_1 + 0xb20),(void *)(param_1 + 0xa48),0xd8);
  *(undefined8 *)(param_1 + 0xc68) = 0x1a4;
  *(undefined8 *)(param_1 + 0xc70) = 0x1ed;
  *(undefined8 *)(param_1 + 0xe78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe80) = 0xfffffffff3fffbef;
  FUN_001eb828();
  *(undefined8 *)(param_1 + 0xee0) = 1000;
  *(undefined8 *)(param_1 + 0xc10) = 0x4000;
  *(undefined8 *)(param_1 + 0xc18) = 0x10000;
  *(undefined8 *)(param_1 + 0x7c0) = 200;
  *(undefined8 *)(param_1 + 0xf10) = 60000;
  *(ulong *)(param_1 + 0xf40) = *(ulong *)(param_1 + 0xf40) & 0xffff07ffffffffff | 0x400c00800000010
  ;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = 0x3c;
  *(undefined8 *)(param_1 + 0xec8) = 0x3c;
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  *(undefined8 *)(param_1 + 0xed8) = 5;
  *(undefined8 *)(param_1 + 0xa40) = 4;
  FUN_001d761c(param_1 + 0x668);
  return 0;
}


