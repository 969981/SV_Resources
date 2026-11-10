/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03372e60; name: FUN_03372e60
 */


uint * FUN_03372e60(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *__s2;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  __s2 = (byte *)*param_2;
  if (__s2 == (byte *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*__s2;
    uVar6 = 0x811c9dc5;
    if (*__s2 != 0) {
      pbVar4 = __s2;
      do {
        pbVar4 = pbVar4 + 1;
        uVar6 = (uVar6 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar4;
      } while (uVar5 != 0);
    }
  }
  uVar5 = *(uint *)(param_1 + 3);
  uVar8 = (ulong)(uVar5 & uVar6);
  lVar7 = param_1[2];
  do {
    uVar2 = *(uint *)(lVar7 + uVar8 * 8 + 4);
    if ((int)uVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar7 + uVar8 * 8);
    if (*puVar1 == uVar6) {
      pbVar4 = *(byte **)(*param_1 + (ulong)uVar2 * 0x10);
      if (pbVar4 == __s2) {
        return puVar1;
      }
      if (((__s2 != (byte *)0x0) && (pbVar4 != (byte *)0x0)) &&
         (iVar3 = strcmp((char *)pbVar4,(char *)__s2), iVar3 == 0)) {
        return puVar1;
      }
    }
    uVar8 = uVar8 + 1 & (long)(int)uVar5;
  } while( true );
}


