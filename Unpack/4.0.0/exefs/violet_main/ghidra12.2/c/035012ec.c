/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035012ec; name: FUN_035012ec
 */


undefined8
FUN_035012ec(undefined8 *param_1,undefined8 param_2,int param_3,ushort param_4,undefined4 param_5)

{
  undefined *puVar1;
  void *__s;
  undefined8 *puVar2;
  size_t __n;
  
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0x11;
  puVar1 = PTR_DAT_047e2fd0;
  __n = ((ulong)(uint)(param_3 << 2) & 0x3fc) * (ulong)param_4;
  __s = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,__n,0x10);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    *param_1 = __s;
    *(ushort *)(param_1 + 2) = param_4;
    *(undefined2 *)((long)param_1 + 0x12) = 0;
    *(int *)(param_1 + 1) = param_3;
    puVar2 = (undefined8 *)(**(code **)(puVar1 + 0x10))(0,0x98);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[5] = 0x3f80000000000000;
      puVar2[6] = 0xffff3f800000;
      puVar2[9] = 0x3f800000;
      *(undefined4 *)(puVar2 + 10) = 0;
      *(undefined1 *)(puVar2 + 0x12) = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x3f800000;
      puVar2[3] = 0x3f800000;
      puVar2[4] = 0;
      puVar2[7] = 0x3f800000;
      puVar2[8] = 0;
      *(undefined1 *)((long)puVar2 + 0x54) = 1;
      puVar2[0xb] = 0x3f8000003f800000;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      param_1[3] = puVar2;
      *puVar2 = param_2;
      *(undefined **)(param_1[3] + 0x60) = PTR_PTR_047e71e0;
      *(undefined4 *)(param_1[3] + 0x78) = param_5;
      return 1;
    }
    param_1[3] = 0;
  }
  return 0x34;
}


