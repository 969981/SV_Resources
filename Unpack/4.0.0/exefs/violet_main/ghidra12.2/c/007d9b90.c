/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d9b90; name: FUN_007d9b90
 */


undefined8 FUN_007d9b90(long param_1,short param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  plVar1 = (long *)FUN_0079365c();
  lVar3 = *plVar1;
  local_28 = 0;
  FUN_007935cc(&local_28);
  uVar2 = local_28 + lVar3 * -10000;
  if (((((((*(short *)(param_1 + 0xc0) == param_2) && (uVar2 < *(ulong *)(param_1 + 0xf0))) ||
         ((*(short *)(param_1 + 0xc2) == param_2 && (uVar2 < *(ulong *)(param_1 + 0xf8))))) ||
        ((*(short *)(param_1 + 0xc4) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x100))))) ||
       (((*(short *)(param_1 + 0xc6) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x108))) ||
        ((((*(short *)(param_1 + 200) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x110))) ||
          ((*(short *)(param_1 + 0xca) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x118))))) ||
         ((*(short *)(param_1 + 0xcc) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x120))))))))) ||
      ((((((*(short *)(param_1 + 0xce) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x128))) ||
          (((*(short *)(param_1 + 0xd0) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x130))) ||
           ((*(short *)(param_1 + 0xd2) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x138))))))) ||
         ((((*(short *)(param_1 + 0xd4) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x140))) ||
           ((*(short *)(param_1 + 0xd6) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x148))))) ||
          ((((*(short *)(param_1 + 0xd8) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x150))) ||
            ((*(short *)(param_1 + 0xda) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x158))))) ||
           ((*(short *)(param_1 + 0xdc) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x160)))))))))
        || ((*(short *)(param_1 + 0xde) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x168))))) ||
       ((((*(short *)(param_1 + 0xe0) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x170))) ||
         ((*(short *)(param_1 + 0xe2) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x178))))) ||
        (((*(short *)(param_1 + 0xe4) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x180))) ||
         ((*(short *)(param_1 + 0xe6) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x188)))))))))))
     || (((((*(short *)(param_1 + 0xe8) == param_2 && (uVar2 < *(ulong *)(param_1 + 400))) ||
           ((*(short *)(param_1 + 0xea) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x198))))) ||
          ((*(short *)(param_1 + 0xec) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x1a0))))) ||
         ((*(short *)(param_1 + 0xee) == param_2 && (uVar2 < *(ulong *)(param_1 + 0x1a8))))))) {
    return 1;
  }
  return 0;
}


