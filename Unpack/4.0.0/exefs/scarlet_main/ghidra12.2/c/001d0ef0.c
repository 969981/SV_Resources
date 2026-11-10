/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d0ef0; name: FUN_001d0ef0
 */


/* WARNING: Removing unreachable block (ram,0x001d13e4) */
/* WARNING: Removing unreachable block (ram,0x001d12dc) */
/* WARNING: Removing unreachable block (ram,0x001d12c0) */
/* WARNING: Removing unreachable block (ram,0x001d12a4) */
/* WARNING: Removing unreachable block (ram,0x001d1288) */
/* WARNING: Removing unreachable block (ram,0x001d1268) */
/* WARNING: Removing unreachable block (ram,0x001d13c8) */
/* WARNING: Removing unreachable block (ram,0x001d1350) */
/* WARNING: Removing unreachable block (ram,0x001d1390) */
/* WARNING: Removing unreachable block (ram,0x001d1318) */
/* WARNING: Removing unreachable block (ram,0x001d13ac) */
/* WARNING: Removing unreachable block (ram,0x001d1334) */
/* WARNING: Removing unreachable block (ram,0x001d136c) */
/* WARNING: Removing unreachable block (ram,0x001d12f8) */
/* WARNING: Removing unreachable block (ram,0x001d1400) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x001d1274 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001d0ef0(long *param_1,int param_2)

{
  undefined4 uVar1;
  ulong local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    uVar1 = 6;
    if (param_2 < 0x271b) {
      switch(param_2) {
      case 3:
        uVar1 = 0;
        param_1[0x1d] = local_60 & 2;
        break;
      case 4:
      case 5:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        break;
      case 6:
        uVar1 = 0;
        param_1[0x2a] = local_60;
        break;
      case 7:
        uVar1 = 0;
        param_1[0x2b] = local_60;
        break;
      case 8:
        uVar1 = 0;
        param_1[0x2d] = local_60;
        break;
      case 0xd:
        uVar1 = 0;
        param_1[0x2c] = local_60;
        break;
      default:
        if (param_2 == 0x2712) {
          uVar1 = 0;
          param_1[0xd] = local_60;
        }
        else if (param_2 == 0x2715) {
          uVar1 = 0;
          param_1[0x39] = local_60;
        }
      }
    }
    else if (param_2 < 0x4e24) {
      if (param_2 < 0x271f) {
        if (param_2 == 0x271b) {
          uVar1 = FUN_001da36c(local_60,param_1 + 0x30);
        }
        else {
          if (param_2 != 0x271c) {
            return 6;
          }
          uVar1 = FUN_001da4f4(local_60,param_1 + 0x34);
        }
      }
      else if (param_2 == 0x271f) {
        uVar1 = 0;
        param_1[0xf] = local_60;
      }
      else if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[0xc] = local_60;
      }
    }
    else if (param_2 < 0x7539) {
      if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x38] = local_60;
      }
      else if (param_2 == 0x4e2e) {
        uVar1 = 0;
        param_1[0xe] = local_60;
      }
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x2e] = local_60;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x2f] = local_60;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


