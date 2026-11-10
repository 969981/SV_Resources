/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533c00; name: FUN_00533c00
 */


undefined8 FUN_00533c00(ulong *param_1,int *param_2)

{
  byte *pbVar1;
  void *__src;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_50;
  ulong uStack_48;
  byte *local_40;
  char local_24 [4];
  
  *param_2 = 0;
  uVar3 = FUN_005345a0(param_1,local_24);
  uVar6 = 0;
  if ((uVar3 & 1) != 0) {
    bVar2 = (byte)*param_1;
    if (local_24[0] == '\0') {
      if ((bVar2 & 1) == 0) {
        uStack_48 = param_1[1];
        local_50 = *param_1;
        local_40 = (byte *)param_1[2];
      }
      else {
        uVar3 = param_1[1];
        __src = (void *)param_1[2];
        if (uVar3 < 0x17) {
          pbVar4 = (byte *)((ulong)&local_50 | 1);
          local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar3 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
          pbVar4 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
          local_50 = uVar7 | 1;
          uStack_48 = uVar3;
          local_40 = pbVar4;
        }
        memcpy(pbVar4,__src,uVar3 + 1);
      }
      pbVar4 = (byte *)((ulong)&local_50 | 1);
      uVar3 = local_50 >> 1 & 0x7f;
      if ((local_50 & 1) != 0) {
        pbVar4 = local_40;
        uVar3 = uStack_48;
      }
      if ((long)uVar3 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        pbVar1 = pbVar4 + uVar3;
        do {
          bVar2 = *pbVar4;
          if (9 < bVar2 - 0x30) {
            uVar6 = 0;
            *param_2 = iVar5;
            goto joined_r0x00533e24;
          }
          if ((0xccccccc < iVar5) || ((int)(-0x7fffffd1 - (uint)bVar2) < iVar5 * 10)) {
            uVar6 = 0;
            *param_2 = 0x7fffffff;
            goto joined_r0x00533e24;
          }
          pbVar4 = pbVar4 + 1;
          iVar5 = iVar5 * 10 + (uint)bVar2 + -0x30;
        } while (pbVar4 < pbVar1);
      }
      uVar6 = 1;
      *param_2 = iVar5;
joined_r0x00533e24:
      if ((local_50 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    else {
      uVar3 = param_1[1];
      pbVar4 = (byte *)param_1[2];
      if ((bVar2 & 1) == 0) {
        pbVar4 = (byte *)((long)param_1 + 1);
        uVar3 = (ulong)(bVar2 >> 1);
      }
      if ((long)uVar3 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        pbVar1 = pbVar4 + uVar3;
        do {
          bVar2 = *pbVar4;
          if (9 < bVar2 - 0x30) {
            *param_2 = iVar5;
            return 0;
          }
          if ((iVar5 < -0xccccccc) || (iVar5 * 10 < (int)(bVar2 + 0x7fffffd0))) {
            *param_2 = -0x80000000;
            return 0;
          }
          pbVar4 = pbVar4 + 1;
          iVar5 = (iVar5 * 10 - (uint)bVar2) + 0x30;
        } while (pbVar4 < pbVar1);
      }
      uVar6 = 1;
      *param_2 = iVar5;
    }
  }
  return uVar6;
}


