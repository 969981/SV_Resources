/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e4720; name: FUN_001e4720
 */


undefined8 FUN_001e4720(long param_1)

{
  if (param_1 != 0) {
    FUN_001ceea8();
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_001cec9c(*(long *)(param_1 + 0xd8),param_1);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_001d0cbc();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN_001cb68c(param_1 + 0x12d8,0);
    *(undefined4 *)(param_1 + 0x16f0) = 0;
    if ((*(byte *)(param_1 + 0x15a5) >> 2 & 1) != 0) {
      FUN_001ec308(*(undefined8 *)(param_1 + 0x14f0));
    }
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN_001ebba4(param_1);
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1148));
    *(undefined8 *)(param_1 + 0x1148) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 0x11b8));
    *(undefined8 *)(param_1 + 0x11b8) = 0;
    FUN_001ebd0c(param_1);
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN_001ec308(*(undefined8 *)(param_1 + 0xf50));
      *(undefined8 *)(param_1 + 0xf50) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0xf50) = 0;
    FUN_001e48ec(param_1);
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1130));
    *(undefined8 *)(param_1 + 0x1130) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1120));
    *(undefined8 *)(param_1 + 0x1120) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1138));
    *(undefined8 *)(param_1 + 0x1138) = 0;
    FUN_001c56e0(param_1,1);
    FUN_001cb238(param_1);
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1638));
    *(undefined8 *)(param_1 + 0x1638) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 0x1640));
    *(undefined8 *)(param_1 + 0x1640) = 0;
    thunk_FUN_001ec308(*(undefined8 *)(param_1 + 0x1288));
    FUN_001d8aec(param_1);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc298(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + -1;
      FUN_001dc2d8(param_1,1);
    }
    FUN_001ec1e4(param_1 + 0x15a8);
    FUN_001e4694(param_1);
    FUN_001ec308(param_1);
  }
  return 0;
}


