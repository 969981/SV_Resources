/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00315140; name: FUN_00315140
 */


ulong FUN_00315140(long param_1,byte *param_2,byte *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  size_t __n;
  byte *pbVar10;
  long lVar11;
  undefined1 auStack_60 [32];
  
  if (5 < *(byte *)(param_1 + 0xca)) goto LAB_00315238;
  lVar11 = *(long *)(param_1 + 0x38);
  switch(*(byte *)(param_1 + 0xca)) {
  case 0:
    __n = (long)param_3 - (long)param_2;
    if (__n == 0) {
      return 0;
    }
    uVar6 = (ulong)*(uint *)(lVar11 + 0x30);
    uVar9 = __n + uVar6;
    if (uVar9 <= *(uint *)(lVar11 + 0x34)) goto LAB_003151f0;
LAB_003151a0:
    if (uVar9 >> 0x20 != 0) goto LAB_00315238;
    *(int *)(lVar11 + 0x34) = (int)uVar9;
    lVar5 = FUN_0038c7f0(*(undefined8 *)(lVar11 + 0x28));
    uVar6 = (ulong)*(uint *)(lVar11 + 0x30);
    *(long *)(lVar11 + 0x28) = lVar5;
    break;
  case 1:
    if (param_2 == param_3) {
      uVar8 = 1;
LAB_0031535c:
      *(undefined1 *)(param_1 + 0xca) = uVar8;
      return 0;
    }
    if (*param_2 != 0) goto switchD_00315184_caseD_2;
    param_2 = param_2 + 1;
    *(undefined1 *)(param_1 + 0xca) = 0;
    __n = (long)param_3 - (long)param_2;
    if (__n == 0) {
      return 0;
    }
    uVar6 = (ulong)*(uint *)(lVar11 + 0x30);
    uVar9 = __n + uVar6;
    if (*(uint *)(lVar11 + 0x34) < uVar9) goto LAB_003151a0;
LAB_003151f0:
    lVar5 = *(long *)(lVar11 + 0x28);
    break;
  case 2:
switchD_00315184_caseD_2:
    do {
      pbVar10 = param_2;
      do {
        if (param_3 == pbVar10) {
          uVar8 = 2;
          goto LAB_0031535c;
        }
        param_2 = pbVar10 + 1;
        bVar3 = *pbVar10;
        if ((&DAT_03cd73b2)[bVar3] == 0xff) {
          FUN_003673f0(auStack_60,"Illegal base64 character");
          uVar7 = 0x51b;
          goto LAB_003153e0;
        }
        pbVar10 = param_2;
      } while (bVar3 == 0x3d);
      *(uint *)(param_1 + 0xd0) = (uint)(byte)(&DAT_03cd73b2)[bVar3] << 0x12;
switchD_00315184_caseD_3:
      pbVar10 = param_2;
      do {
        if (param_3 == pbVar10) {
          uVar8 = 3;
          goto LAB_0031535c;
        }
        param_2 = pbVar10 + 1;
        bVar3 = *pbVar10;
        if ((byte)(&DAT_03cd73b2)[bVar3] == 0xff) {
          FUN_003673f0(auStack_60,"Illegal base64 character");
          uVar7 = 0x52b;
          goto LAB_003153e0;
        }
        pbVar10 = param_2;
      } while (bVar3 == 0x3d);
      *(uint *)(param_1 + 0xd0) =
           *(uint *)(param_1 + 0xd0) | (uint)(byte)(&DAT_03cd73b2)[bVar3] << 0xc;
switchD_00315184_caseD_4:
      pbVar10 = param_2;
      do {
        if (param_3 == pbVar10) {
          uVar8 = 4;
          goto LAB_0031535c;
        }
        param_2 = pbVar10 + 1;
        bVar3 = *pbVar10;
        if ((byte)(&DAT_03cd73b2)[bVar3] == 0xff) {
          FUN_003673f0(auStack_60,"Illegal base64 character");
          uVar7 = 0x53b;
          goto LAB_003153e0;
        }
        pbVar10 = param_2;
      } while (bVar3 == 0x3d);
      *(uint *)(param_1 + 0xd0) =
           *(uint *)(param_1 + 0xd0) | (uint)(byte)(&DAT_03cd73b2)[bVar3] << 6;
switchD_00315184_caseD_5:
      pbVar10 = param_2;
      do {
        if (param_3 == pbVar10) {
          uVar8 = 5;
          goto LAB_0031535c;
        }
        param_2 = pbVar10 + 1;
        bVar3 = *pbVar10;
        if ((byte)(&DAT_03cd73b2)[bVar3] == 0xff) {
          FUN_003673f0(auStack_60,"Illegal base64 character");
          uVar7 = 0x54b;
LAB_003153e0:
          uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,uVar7,auStack_60,0,0);
          if (uVar9 != 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
              uVar6 = uVar9;
              if (4 < uVar9) {
                uVar6 = FUN_00350fb0(uVar9);
              }
              *(ulong *)(param_1 + 0x10) = uVar6;
            }
            *(undefined1 **)(param_1 + 0x18) = &LAB_00314840;
            return uVar9;
          }
          goto LAB_00315238;
        }
        pbVar10 = param_2;
      } while (bVar3 == 0x3d);
      uVar2 = *(uint *)(param_1 + 0xd0);
      uVar4 = uVar2 | (byte)(&DAT_03cd73b2)[bVar3];
      *(uint *)(param_1 + 0xd0) = uVar4;
      uVar9 = (ulong)*(uint *)(lVar11 + 0x30);
      if ((ulong)*(uint *)(lVar11 + 0x34) < uVar9 + 3) {
        if (0xfffffffc < *(uint *)(lVar11 + 0x30)) goto LAB_00315238;
        *(int *)(lVar11 + 0x34) = (int)(uVar9 + 3);
        lVar5 = FUN_0038c7f0(*(undefined8 *)(lVar11 + 0x28));
        uVar9 = (ulong)*(uint *)(lVar11 + 0x30);
        *(long *)(lVar11 + 0x28) = lVar5;
      }
      else {
        lVar5 = *(long *)(lVar11 + 0x28);
      }
      puVar1 = (undefined1 *)(lVar5 + uVar9);
      *puVar1 = (char)(uVar2 >> 0x10);
      puVar1[1] = (char)(uVar2 >> 8);
      puVar1[2] = (char)uVar4;
      if (0xfffffffc < *(uint *)(lVar11 + 0x30)) goto LAB_00315238;
      *(uint *)(lVar11 + 0x30) = *(uint *)(lVar11 + 0x30) + 3;
    } while( true );
  case 3:
    goto switchD_00315184_caseD_3;
  case 4:
    goto switchD_00315184_caseD_4;
  case 5:
    goto switchD_00315184_caseD_5;
  }
  memcpy((void *)(lVar5 + uVar6),param_2,__n);
  if (__n <= ~*(uint *)(lVar11 + 0x30)) {
    *(uint *)(lVar11 + 0x30) = *(uint *)(lVar11 + 0x30) + (int)__n;
    return 0;
  }
LAB_00315238:
                    /* WARNING: Subroutine does not return */
  abort();
}


