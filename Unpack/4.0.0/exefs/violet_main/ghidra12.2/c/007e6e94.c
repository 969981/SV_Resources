/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6e94; name: FUN_007e6e94
 */


void FUN_007e6e94(undefined8 param_1,long param_2,ushort param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  void *__s;
  ulong uVar5;
  ulong local_58 [2];
  undefined4 local_48 [2];
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((1 < param_3) && (param_3 != 0xffff)) {
      uVar2 = FUN_0078a12c();
      uVar5 = (ulong)param_3;
      lVar3 = FUN_007bf9f0(uVar5 * 0x5d0,uVar2);
      if (lVar3 != 0) {
        __s = (void *)(lVar3 + 0x2c);
        puVar1 = PTR_DAT_047d1498 + 0x10;
        do {
          *(undefined **)((long)__s + -0x14) = puVar1;
          memset(__s,0,4);
          *(undefined8 *)((long)__s + -0xc) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          memset(__s,0,4);
          *(undefined2 *)((long)__s + -0x2c) = 0;
          local_58[0] = 0;
          FUN_007935cc(local_58);
          *(undefined8 *)((long)__s + -0x1c) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          *(ulong *)((long)__s + -0x24) = local_58[0];
          *(undefined8 *)((long)__s + -0xc) = 0;
          memset(__s,0,4);
          uVar5 = uVar5 - 1;
          __s = (void *)((long)__s + 0x5d0);
        } while (uVar5 != 0);
      }
      *(long *)(param_2 + 8) = lVar3;
      *(ushort *)(param_2 + 0x10) = param_3;
      local_58[0] = local_58[0] & 0xffffffff00000000;
      goto LAB_007e6f9c;
    }
    uVar4 = 0x10407;
  }
  else {
    uVar4 = 0x10402;
  }
  local_58[0] = CONCAT44(local_58[0]._4_4_,uVar4);
LAB_007e6f9c:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


