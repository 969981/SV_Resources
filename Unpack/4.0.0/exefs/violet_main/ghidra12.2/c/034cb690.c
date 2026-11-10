/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cb690; name: FUN_034cb690
 */


void FUN_034cb690(undefined8 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,uint param_6,uint param_7)

{
  size_t __n;
  char *__dest;
  size_t sVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar2 & 0x7c) == 4) && (param_1[2] != 0)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    uVar2 = *(ushort *)((long)param_1 + 0xc);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar2 & 0xf800;
  *(undefined4 *)(param_1 + 3) = param_3;
  if (param_4 != (char *)0x0) {
    __n = strlen(param_4);
    __dest = (char *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,__n + 1);
    param_1[2] = __dest;
    if (__dest != (char *)0x0) {
      sVar1 = strlen(param_4);
      if (sVar1 + 1 <= __n) {
        __n = sVar1 + 1;
      }
      strncpy(__dest,param_4,__n);
      __dest[__n] = '\0';
    }
  }
  uVar2 = 0x100;
  if ((param_7 & 1) == 0) {
    uVar2 = 0;
  }
  *(undefined4 *)((long)param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)param_1 = param_2;
  uVar3 = 0x284;
  if ((param_6 & 1) == 0) {
    uVar3 = 0x84;
  }
  *(ushort *)((long)param_1 + 0xc) = uVar3 | uVar2 | *(ushort *)((long)param_1 + 0xc) & 0xf800;
  return;
}


