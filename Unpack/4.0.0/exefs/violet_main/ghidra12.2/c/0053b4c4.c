/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053b4c4; name: FUN_0053b4c4
 */


bool FUN_0053b4c4(byte *param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  void *__s2;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)param_3[1];
  if ((undefined8 *)*param_3 != puVar4) {
    puVar8 = (undefined8 *)*param_3 + 2;
    do {
      if (param_2 == param_1) {
        return true;
      }
      bVar5 = *(byte *)(puVar8 + -2);
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = puVar8[-1];
      }
      bVar6 = *param_1;
      uVar3 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 8);
      }
      __n = uVar2;
      if (uVar3 <= uVar2) {
        __n = uVar3;
      }
      if (__n == 0) {
        if (uVar2 != uVar3) {
          return uVar3 < uVar2;
        }
      }
      else {
        __s1 = *(byte **)(param_1 + 0x10);
        if ((bVar6 & 1) == 0) {
          __s1 = param_1 + 1;
        }
        __s2 = (void *)((long)puVar8 + -0xf);
        if ((bVar5 & 1) != 0) {
          __s2 = (void *)*puVar8;
        }
        iVar7 = memcmp(__s1,__s2,__n);
        if (iVar7 == 0) {
          if (uVar3 < uVar2) {
            return true;
          }
        }
        else if (iVar7 < 0) {
          return true;
        }
        iVar7 = memcmp(__s2,__s1,__n);
        if (iVar7 == 0) {
          if (uVar2 < uVar3) {
            return false;
          }
        }
        else if (iVar7 < 0) {
          return false;
        }
      }
      puVar1 = puVar8 + 2;
      puVar8 = puVar8 + 4;
      param_1 = param_1 + 0x20;
    } while (puVar1 != puVar4);
  }
  return false;
}


